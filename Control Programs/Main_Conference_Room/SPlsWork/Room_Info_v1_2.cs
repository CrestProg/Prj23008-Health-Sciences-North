using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_ROOM_INFO_V1_2
{
    public class UserModuleClass_ROOM_INFO_V1_2 : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        
        
        
        
        Crestron.Logos.SplusObjects.StringOutput ERRORMSG__DOLLAR__;
        InOutArray<Crestron.Logos.SplusObjects.StringOutput> OUT__DOLLAR__;
        Crestron.Logos.SplusObjects.DigitalInput CHECK_FILE_TIME;
        CrestronString RBUF;
        CrestronString WBUF;
        CrestronString FILENAME__DOLLAR__;
        short FILEHANDLER = 0;
        short ERRORREAD = 0;
        short ERRORWRITE = 0;
        short ERRORSEEK = 0;
        FILE_INFO FILEINFO;
        short FILE_TIME = 0;
        short FOUND = 0;
        StringParameter STORAGE;
        ushort FINDCLOSEVALUE = 0;
        private void PROCESS (  SplusExecutionContext __context__ ) 
            { 
            CrestronString TEMP__DOLLAR__;
            TEMP__DOLLAR__  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 70, this );
            
            ushort I = 0;
            ushort STARTPOSITION = 0;
            ushort ENDPOSITION = 0;
            
            
            __context__.SourceCodeLine = 64;
            I = (ushort) ( 1 ) ; 
            __context__.SourceCodeLine = 65;
            while ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.Find( "\r\n" , RBUF , 1 ) ) && Functions.TestForTrue ( Functions.BoolToInt ( I <= 10 ) )) ))  ) ) 
                { 
                __context__.SourceCodeLine = 67;
                TEMP__DOLLAR__  .UpdateValue ( Functions.Remove ( "\r\n" , RBUF , 1)  ) ; 
                __context__.SourceCodeLine = 68;
                /* Trace( "temp = {0}", TEMP__DOLLAR__ ) */ ; 
                __context__.SourceCodeLine = 69;
                STARTPOSITION = (ushort) ( Functions.Find( "," , TEMP__DOLLAR__ ) ) ; 
                __context__.SourceCodeLine = 70;
                ENDPOSITION = (ushort) ( Functions.Find( "\r\n" , TEMP__DOLLAR__ ) ) ; 
                __context__.SourceCodeLine = 71;
                OUT__DOLLAR__ [ I]  .UpdateValue ( Functions.Mid ( TEMP__DOLLAR__ ,  (int) ( (STARTPOSITION + 1) ) ,  (int) ( ((ENDPOSITION - STARTPOSITION) - 1) ) )  ) ; 
                __context__.SourceCodeLine = 73;
                I = (ushort) ( (I + 1) ) ; 
                __context__.SourceCodeLine = 65;
                } 
            
            
            }
            
        private void READFILE (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 79;
            StartFileOperations ( ) ; 
            __context__.SourceCodeLine = 80;
            FOUND = (short) ( FindFirst( FILENAME__DOLLAR__ , ref FILEINFO ) ) ; 
            __context__.SourceCodeLine = 81;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (FOUND == 0))  ) ) 
                { 
                __context__.SourceCodeLine = 83;
                FILE_TIME = (short) ( FILEINFO.iTime ) ; 
                __context__.SourceCodeLine = 84;
                /* Trace( "File Time = {0:d}", (short)FILE_TIME) */ ; 
                __context__.SourceCodeLine = 85;
                FILEHANDLER = (short) ( FileOpen( FILENAME__DOLLAR__ ,(ushort) (2 | 16384) ) ) ; 
                __context__.SourceCodeLine = 87;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( FILEHANDLER < 0 ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 87;
                    MakeString ( ERRORMSG__DOLLAR__ , "Error Opennig The Config File {0:d}", (short)FILEHANDLER) ; 
                    __context__.SourceCodeLine = 87;
                    FINDCLOSEVALUE = (ushort) ( FindClose() ) ; 
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 89;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( FILEHANDLER >= 0 ))  ) ) 
                        { 
                        __context__.SourceCodeLine = 91;
                        ERRORREAD = (short) ( FileRead( (short)( FILEHANDLER ) , RBUF , (ushort)( 500 ) ) ) ; 
                        __context__.SourceCodeLine = 92;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( ERRORREAD < 0 ))  ) ) 
                            {
                            __context__.SourceCodeLine = 92;
                            MakeString ( ERRORMSG__DOLLAR__ , "Error Reading The Config File {0:d}", (short)ERRORREAD) ; 
                            }
                        
                        __context__.SourceCodeLine = 93;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( ERRORREAD >= 0 ))  ) ) 
                            {
                            __context__.SourceCodeLine = 93;
                            PROCESS (  __context__  ) ; 
                            }
                        
                        __context__.SourceCodeLine = 94;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (FileClose( (short)( FILEHANDLER ) ) != 0))  ) ) 
                            {
                            __context__.SourceCodeLine = 95;
                            /* Trace( "Error Closing file") */ ; 
                            }
                        
                        __context__.SourceCodeLine = 96;
                        FINDCLOSEVALUE = (ushort) ( FindClose() ) ; 
                        } 
                    
                    }
                
                } 
            
            __context__.SourceCodeLine = 102;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (FINDCLOSEVALUE == 0))  ) ) 
                {
                __context__.SourceCodeLine = 103;
                MakeString ( ERRORMSG__DOLLAR__ , "File Find Is Closed.") ; 
                }
            
            else 
                {
                __context__.SourceCodeLine = 105;
                MakeString ( ERRORMSG__DOLLAR__ , "Error Closing Find") ; 
                }
            
            __context__.SourceCodeLine = 107;
            EndFileOperations ( ) ; 
            
            }
            
        object CHECK_FILE_TIME_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 112;
                StartFileOperations ( ) ; 
                __context__.SourceCodeLine = 113;
                FOUND = (short) ( FindFirst( FILENAME__DOLLAR__ , ref FILEINFO ) ) ; 
                __context__.SourceCodeLine = 114;
                /* Trace( "{0:d}", (short)FOUND) */ ; 
                __context__.SourceCodeLine = 116;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (FOUND == 0))  ) ) 
                    { 
                    __context__.SourceCodeLine = 118;
                    /* Trace( "File_Time Is {0:d}", (short)Functions.Abs( FILEINFO.iTime )) */ ; 
                    __context__.SourceCodeLine = 120;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (Functions.Abs( FILEINFO.iTime ) != Functions.Abs( FILE_TIME )))  ) ) 
                        { 
                        __context__.SourceCodeLine = 122;
                        FINDCLOSEVALUE = (ushort) ( FindClose() ) ; 
                        __context__.SourceCodeLine = 123;
                        EndFileOperations ( ) ; 
                        __context__.SourceCodeLine = 124;
                        Functions.Delay (  (int) ( 100 ) ) ; 
                        __context__.SourceCodeLine = 125;
                        READFILE (  __context__  ) ; 
                        } 
                    
                    else 
                        { 
                        __context__.SourceCodeLine = 127;
                        /* Trace( "No need to read file again!") */ ; 
                        __context__.SourceCodeLine = 127;
                        FINDCLOSEVALUE = (ushort) ( FindClose() ) ; 
                        __context__.SourceCodeLine = 127;
                        EndFileOperations ( ) ; 
                        } 
                    
                    } 
                
                else 
                    { 
                    __context__.SourceCodeLine = 130;
                    /* Trace( "File can't be found {0:d}", (short)FOUND) */ ; 
                    __context__.SourceCodeLine = 130;
                    FINDCLOSEVALUE = (ushort) ( FindClose() ) ; 
                    __context__.SourceCodeLine = 130;
                    EndFileOperations ( ) ; 
                    } 
                
                __context__.SourceCodeLine = 132;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( FINDCLOSEVALUE < 0 ))  ) ) 
                    {
                    __context__.SourceCodeLine = 133;
                    MakeString ( ERRORMSG__DOLLAR__ , "Error Closing Find") ; 
                    }
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    public override object FunctionMain (  object __obj__ ) 
        { 
        try
        {
            SplusExecutionContext __context__ = SplusFunctionMainStartCode();
            
            __context__.SourceCodeLine = 141;
            WaitForInitializationComplete ( ) ; 
            __context__.SourceCodeLine = 142;
            Functions.Delay (  (int) ( 1500 ) ) ; 
            __context__.SourceCodeLine = 143;
            FILENAME__DOLLAR__  .UpdateValue ( STORAGE + "\\USER\\Room_Info.csv"  ) ; 
            __context__.SourceCodeLine = 144;
            READFILE (  __context__  ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler(); }
        return __obj__;
        }
        
    
    public override void LogosSplusInitialize()
    {
        SocketInfo __socketinfo__ = new SocketInfo( 1, this );
        InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
        _SplusNVRAM = new SplusNVRAM( this );
        RBUF  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 500, this );
        WBUF  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 500, this );
        FILENAME__DOLLAR__  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 50, this );
        FILEINFO  = new FILE_INFO();
        FILEINFO .PopulateDefaults();
        
        CHECK_FILE_TIME = new Crestron.Logos.SplusObjects.DigitalInput( CHECK_FILE_TIME__DigitalInput__, this );
        m_DigitalInputList.Add( CHECK_FILE_TIME__DigitalInput__, CHECK_FILE_TIME );
        
        ERRORMSG__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( ERRORMSG__DOLLAR____AnalogSerialOutput__, this );
        m_StringOutputList.Add( ERRORMSG__DOLLAR____AnalogSerialOutput__, ERRORMSG__DOLLAR__ );
        
        OUT__DOLLAR__ = new InOutArray<StringOutput>( 10, this );
        for( uint i = 0; i < 10; i++ )
        {
            OUT__DOLLAR__[i+1] = new Crestron.Logos.SplusObjects.StringOutput( OUT__DOLLAR____AnalogSerialOutput__ + i, this );
            m_StringOutputList.Add( OUT__DOLLAR____AnalogSerialOutput__ + i, OUT__DOLLAR__[i+1] );
        }
        
        STORAGE = new StringParameter( STORAGE__Parameter__, this );
        m_ParameterList.Add( STORAGE__Parameter__, STORAGE );
        
        
        CHECK_FILE_TIME.OnDigitalPush.Add( new InputChangeHandlerWrapper( CHECK_FILE_TIME_OnPush_0, false ) );
        
        _SplusNVRAM.PopulateCustomAttributeList( true );
        
        NVRAM = _SplusNVRAM;
        
    }
    
    public override void LogosSimplSharpInitialize()
    {
        
        
    }
    
    public UserModuleClass_ROOM_INFO_V1_2 ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}
    
    
    
    
    const uint ERRORMSG__DOLLAR____AnalogSerialOutput__ = 0;
    const uint OUT__DOLLAR____AnalogSerialOutput__ = 1;
    const uint CHECK_FILE_TIME__DigitalInput__ = 0;
    const uint STORAGE__Parameter__ = 10;
    
    [SplusStructAttribute(-1, true, false)]
    public class SplusNVRAM : SplusStructureBase
    {
    
        public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
        
        
    }
    
    SplusNVRAM _SplusNVRAM = null;
    
    public class __CEvent__ : CEvent
    {
        public __CEvent__() {}
        public void Close() { base.Close(); }
        public int Reset() { return base.Reset() ? 1 : 0; }
        public int Set() { return base.Set() ? 1 : 0; }
        public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
    }
    public class __CMutex__ : CMutex
    {
        public __CMutex__() {}
        public void Close() { base.Close(); }
        public void ReleaseMutex() { base.ReleaseMutex(); }
        public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
    }
     public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
