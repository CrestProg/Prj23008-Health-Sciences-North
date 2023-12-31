namespace HD_MD_4K_E;
        // class declarations
         class GenericSlot;
         class Input;
         class Output;
         class SerialPort;
         class IRPort;
         class Input;
         class Output;
         class OEMSwitcher4K;
         class HDMDX400;
     class OEMSwitcher4K 
    {
        // class delegates
        delegate FUNCTION DelegateFnInt ( SIGNED_LONG_INTEGER myInt );
        delegate FUNCTION DelegateFnIntInt ( SIGNED_LONG_INTEGER myInt , SIGNED_LONG_INTEGER myInt2 );
        delegate FUNCTION DelegateFnIntString ( SIGNED_LONG_INTEGER myInt , SIMPLSHARPSTRING myString );

        // class events

        // class functions
        FUNCTION Initialize ( STRING address , SIGNED_LONG_INTEGER port , SIGNED_LONG_INTEGER pollInterval );
        FUNCTION Connect ();
        FUNCTION Disconnect ();
        FUNCTION QueryAll ();
        FUNCTION CECMessageTransmit ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetAutoRoute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetColorSpaceMode ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetFrontPanelLock ( SIGNED_LONG_INTEGER value );
        FUNCTION SetHDCPAlwaysOn ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetHDCPSupport ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetInputName ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputName ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetRoute ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateFnInt ConnectionStateChange;
        DelegateProperty DelegateFnIntInt AspectRatioChange;
        DelegateProperty DelegateFnInt AutoRouteChange;
        DelegateProperty DelegateFnIntInt CECErrorChange;
        DelegateProperty DelegateFnIntString CECMessageChange;
        DelegateProperty DelegateFnIntInt ColorspaceModeChange;
        DelegateProperty DelegateFnIntInt DeepColorModeChange;
        DelegateProperty DelegateFnInt FrontPanelLockChange;
        DelegateProperty DelegateFnIntInt HDCPActiveChange;
        DelegateProperty DelegateFnIntInt HDCPAlwaysOnChange;
        DelegateProperty DelegateFnIntInt HDCPDisabledChange;
        DelegateProperty DelegateFnIntInt HDCPSupportChange;
        DelegateProperty DelegateFnIntInt HotplugStateChange;
        DelegateProperty DelegateFnIntInt HResChange;
        DelegateProperty DelegateFnIntInt InputHDCPStateChange;
        DelegateProperty DelegateFnIntString InputNameChange;
        DelegateProperty DelegateFnIntInt OutputDisabledChange;
        DelegateProperty DelegateFnIntInt OutputHDCPStateChange;
        DelegateProperty DelegateFnIntString OutputNameChange;
        DelegateProperty DelegateFnIntInt RefreshRateChange;
        DelegateProperty DelegateFnIntInt RouteChange;
        DelegateProperty DelegateFnIntString SinkManufacturerChange;
        DelegateProperty DelegateFnIntString SinkNameChange;
        DelegateProperty DelegateFnIntString SinkSerialNumberChange;
        DelegateProperty DelegateFnIntInt SyncDetectChange;
        DelegateProperty DelegateFnIntInt VResChange;
    };

     class HDMDX400 
    {
        // class delegates
        delegate FUNCTION DelegateFnInt ( SIGNED_LONG_INTEGER myInt );
        delegate FUNCTION DelegateFnIntInt ( SIGNED_LONG_INTEGER myInt , SIGNED_LONG_INTEGER myInt2 );
        delegate FUNCTION DelegateFnIntString ( SIGNED_LONG_INTEGER myInt , SIMPLSHARPSTRING myString );

        // class events

        // class functions
        FUNCTION SetHDMIOutputTimeoutVideoOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetDMOutputTimeoutVideoOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetTransmitterModeHDMI ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetTransmitterModeDM ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetHDMIOutputVideoTimeout ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetDMOutputVideoTimeout ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetHDMIAudioMute ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetDMAudioMute ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputScalerEnabled ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputBlankVideo ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputDownscaleEnabled ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputName ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetHDMIOutputName ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetDMOutputName ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION OutputCECMessageTransmit ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetAudioMute ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetAudioVolume ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetAudioDelay ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialTerminator ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialBaud ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialDataBits ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialParity ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialStopBits ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialHardwareHandshake ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialSoftwareHandshake ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialPacing ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetSerialTransmit ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetIRTransmitAnalog ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetIRTransmitSerial ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetFrontPanelLock ( SIGNED_LONG_INTEGER value );
        FUNCTION SetFrontPanelLed ( SIGNED_LONG_INTEGER value );
        FUNCTION SetReceiverAutoRoute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetReceiverAutoRoute1 ( SIGNED_LONG_INTEGER value );
        FUNCTION SetTransmitterAutoRoute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetTt100Led1 ( SIGNED_LONG_INTEGER value );
        FUNCTION SetTt100Led2 ( SIGNED_LONG_INTEGER value );
        FUNCTION SetAutoRoute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetAutoRoute1 ( SIGNED_LONG_INTEGER value );
        FUNCTION SetMicAudioMute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetLineAudioMute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetMicMode ( SIGNED_LONG_INTEGER value );
        FUNCTION SetAudioRoute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetSelectedSourceAudioMute ( SIGNED_LONG_INTEGER value );
        FUNCTION SetSelectedSourceAudioGain ( SIGNED_LONG_INTEGER value );
        FUNCTION SetMicAudioGain ( SIGNED_LONG_INTEGER value );
        FUNCTION SetLineAudioGain ( SIGNED_LONG_INTEGER value );
        FUNCTION SetInputHDCPSupport ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetInputPriority ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetInputName ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION InputCECMessageTransmit ( SIGNED_LONG_INTEGER index , SIMPLSHARPSTRING value );
        FUNCTION SetInputFreeRunEnable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOnScreenDisplay ( SIGNED_LONG_INTEGER value );
        FUNCTION SetInputHDCPSupportLevel ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetInputAutoroutePriority ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetInputAutoroute ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputTimeoutEnable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputTimeoutVideoOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputHDCPAlwaysOn ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputRoute ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputResolution ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputVideoTimeout ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetOutputColorSpaceMode ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetAudioMixerChannel ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetAudioMixer ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetHDMIOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetDMOutputDisable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetHDMIOutputTimeoutEnable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION SetDMOutputTimeoutEnable ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER value );
        FUNCTION Init ( STRING deviceType );
        FUNCTION Initialize ( STRING address , SIGNED_LONG_INTEGER port , SIGNED_LONG_INTEGER pollInterval );
        FUNCTION Connect ();
        FUNCTION Disconnect ();
        FUNCTION QueryAll ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateFnInt ConnectionStateChange;
        DelegateProperty DelegateFnInt RemoteEndDetectedChange;
        DelegateProperty DelegateFnInt FrontPanelLockChange;
        DelegateProperty DelegateFnInt FrontPanelLedChange;
        DelegateProperty DelegateFnInt TransmitterAutoRouteChange;
        DelegateProperty DelegateFnInt ReceiverAutoRouteChange;
        DelegateProperty DelegateFnInt ReceiverAutoRoute1Change;
        DelegateProperty DelegateFnInt AutoRouteChange;
        DelegateProperty DelegateFnInt AutoRoute1EnabledChange;
        DelegateProperty DelegateFnInt Tt100Button1PressedChange;
        DelegateProperty DelegateFnInt Tt100Button2PressedChange;
        DelegateProperty DelegateFnInt Tt100Led1Change;
        DelegateProperty DelegateFnInt Tt100Led2Change;
        DelegateProperty DelegateFnInt OnScreenDisplayChange;
        DelegateProperty DelegateFnIntInt InputSyncDetectChange;
        DelegateProperty DelegateFnIntInt InputHDCPSupportChange;
        DelegateProperty DelegateFnIntInt InputHDCPActiveChange;
        DelegateProperty DelegateFnIntInt InputInterlacedChange;
        DelegateProperty DelegateFnIntInt InputCECErrorChange;
        DelegateProperty DelegateFnIntInt InputHResChange;
        DelegateProperty DelegateFnIntInt InputVResChange;
        DelegateProperty DelegateFnIntInt InputRefreshRateChange;
        DelegateProperty DelegateFnIntInt InputAspectRatioChange;
        DelegateProperty DelegateFnIntInt InputDeepColorModeChange;
        DelegateProperty DelegateFnIntInt InputHDCPStateChange;
        DelegateProperty DelegateFnIntInt InputPriorityChange;
        DelegateProperty DelegateFnIntInt InputFreeRunChange;
        DelegateProperty DelegateFnIntString InputNameChange;
        DelegateProperty DelegateFnIntString InputCECMessageChange;
        DelegateProperty DelegateFnIntInt InputHDCPSupportLevelChange;
        DelegateProperty DelegateFnIntInt OutputDisabledChange;
        DelegateProperty DelegateFnIntInt HDMIOutputDisabledChange;
        DelegateProperty DelegateFnIntInt DMOutputDisabledChange;
        DelegateProperty DelegateFnIntInt OutputCECErrorChange;
        DelegateProperty DelegateFnIntInt OutputHDCPAlwaysOnChange;
        DelegateProperty DelegateFnIntInt OutputHDCPDisabledChange;
        DelegateProperty DelegateFnIntInt HDMIOutputHDCPDisabledChange;
        DelegateProperty DelegateFnIntInt DMOutputHDCPDisabledChange;
        DelegateProperty DelegateFnIntInt OutputHotplugStateChange;
        DelegateProperty DelegateFnIntInt HDMIOutputHotplugStateChange;
        DelegateProperty DelegateFnIntInt DMOutputHotplugStateChange;
        DelegateProperty DelegateFnIntInt OutputVideoTimeoutEnableChange;
        DelegateProperty DelegateFnIntInt HDMIOutputVideoTimeoutEnableChange;
        DelegateProperty DelegateFnIntInt DMOutputVideoTimeoutEnableChange;
        DelegateProperty DelegateFnIntInt OutputTimeoutVideoOutputDisableChange;
        DelegateProperty DelegateFnIntInt HDMIOutputTimeoutVideoOutputDisableChange;
        DelegateProperty DelegateFnIntInt DMOutputTimeoutVideoOutputDisableChange;
        DelegateProperty DelegateFnIntInt OutputScalerEnabledChange;
        DelegateProperty DelegateFnIntInt OutputDownscaleEnabledChange;
        DelegateProperty DelegateFnIntInt OutputBlankVideoChange;
        DelegateProperty DelegateFnIntInt OutputRouteChange;
        DelegateProperty DelegateFnIntInt OutputVideoTimeoutChange;
        DelegateProperty DelegateFnIntInt HDMIOutputVideoTimeoutChange;
        DelegateProperty DelegateFnIntInt DMOutputVideoTimeoutChange;
        DelegateProperty DelegateFnIntInt OutputResolutionChange;
        DelegateProperty DelegateFnIntInt OutputHResChange;
        DelegateProperty DelegateFnIntInt OutputVResChange;
        DelegateProperty DelegateFnIntInt OutputRefreshRateChange;
        DelegateProperty DelegateFnIntInt OutputAspectRatioChange;
        DelegateProperty DelegateFnIntInt OutputColorspaceModeChange;
        DelegateProperty DelegateFnIntInt OutputDeepColorModeChange;
        DelegateProperty DelegateFnIntInt OutputInterlacedChange;
        DelegateProperty DelegateFnIntInt OutputHDCPStateChange;
        DelegateProperty DelegateFnIntInt HDMIOutputHDCPStateChange;
        DelegateProperty DelegateFnIntInt DMOutputHDCPStateChange;
        DelegateProperty DelegateFnIntInt OutputHDCPTransmitterModeChange;
        DelegateProperty DelegateFnIntInt HDMIOutputHDCPTransmitterModeChange;
        DelegateProperty DelegateFnIntInt DMOutputHDCPTransmitterModeChange;
        DelegateProperty DelegateFnIntString OutputNameChange;
        DelegateProperty DelegateFnIntString OutputCECMessageChange;
        DelegateProperty DelegateFnIntString OutputSinkManufacturerChange;
        DelegateProperty DelegateFnIntString OutputSinkNameChange;
        DelegateProperty DelegateFnIntString OutputSinkSerialNumberChange;
        DelegateProperty DelegateFnIntString HDMIOutputSinkManufacturerChange;
        DelegateProperty DelegateFnIntString HDMIOutputSinkNameChange;
        DelegateProperty DelegateFnIntString HDMIOutputSinkSerialNumberChange;
        DelegateProperty DelegateFnIntString HDMIOutputNameChange;
        DelegateProperty DelegateFnIntString DMOutputSinkManufacturerChange;
        DelegateProperty DelegateFnIntString DMOutputSinkNameChange;
        DelegateProperty DelegateFnIntString DMOutputSinkSerialNumberChange;
        DelegateProperty DelegateFnIntString DMOutputNameChange;
        DelegateProperty DelegateFnIntInt AudioMuteEnabledChange;
        DelegateProperty DelegateFnIntInt AudioVolumeChange;
        DelegateProperty DelegateFnIntInt AudioDelayChange;
        DelegateProperty DelegateFnInt MicAudioGainChange;
        DelegateProperty DelegateFnInt LineAudioGainChange;
        DelegateProperty DelegateFnInt SelectedSourceAudioGainChange;
        DelegateProperty DelegateFnInt MicModeChange;
        DelegateProperty DelegateFnInt AudioRouteChange;
        DelegateProperty DelegateFnInt MicAudioMuteEnabledChange;
        DelegateProperty DelegateFnInt LineAudioMuteEnabledChange;
        DelegateProperty DelegateFnInt SelectedSourceAudioMuteEnabledChange;
        DelegateProperty DelegateFnIntInt HDMIAudioMuteEnabledChange;
        DelegateProperty DelegateFnIntInt DMAudioMuteEnabledChange;
        DelegateProperty DelegateFnIntInt AudioMixerEnabledChange;
        DelegateProperty DelegateFnIntInt AudioMixerChannelChange;
        DelegateProperty DelegateFnIntInt SerialTerminatorChange;
        DelegateProperty DelegateFnIntInt SerialBaudChange;
        DelegateProperty DelegateFnIntInt SerialDataBitsChange;
        DelegateProperty DelegateFnIntInt SerialParityChange;
        DelegateProperty DelegateFnIntInt SerialStopBitsChange;
        DelegateProperty DelegateFnIntInt SerialHardwareHandshakeChange;
        DelegateProperty DelegateFnIntInt SerialSoftwareHandshakeChange;
        DelegateProperty DelegateFnIntInt SerialPacingChange;
        DelegateProperty DelegateFnIntString SerialTransmitChange;
    };

