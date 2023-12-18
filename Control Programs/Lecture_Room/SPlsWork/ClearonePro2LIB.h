namespace ClearonePro2LIB;
        // class declarations
         class Component;
         class MessageBundle;
         class ClearonePro2;
         class ComponentUtil;
           class ResponseMsg;
     class Component 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class ClearonePro2 
    {
        // class delegates
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION Connect ();
        FUNCTION Disconnect ();
        FUNCTION Initialize ( INTEGER state );
        FUNCTION Configure ( INTEGER Type , INTEGER CommandProcessorID , STRING IPAddress , STRING Username , STRING Password );
        FUNCTION RS232Response ( STRING msg );
        FUNCTION Poll ();
        FUNCTION GetInitialized ();
        FUNCTION SendHeartbeat ();
        FUNCTION Strikeout ();
        FUNCTION sendTrace ( STRING msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty StringCallback SendDebug;
        DelegateProperty IntegerCallback ClientSocketStatus;
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnCommunicatingChange;
        DelegateProperty StringCallback OnRS232Transmit;
    };

     class ComponentUtil 
    {
        // class delegates

        // class events

        // class functions
        static FUNCTION Register ( Component me );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace ClearonePro2LIB.Components;
        // class declarations
         class SkypeComponent;
         class MacroComponent;
         class GateComponent;
         class AnalogDialerComponent;
         class EPGenericComponent;
         class RoomGenericComponent;
         class VoIPDialerComponent;
         class MTComponent;
         class GainComponent;
           class IntegerCallback;
           class StringCallback;
           class S4BContactListResponseHandler;
           class S4BContactListResponse;
           class S4BSelectedItemChangeHandler;
           class S4BSelectedItem;
           class S4BSessionListResponseHandler;
           class S4BSessionListResponse;
           class S4BActiveSessionInfoHandler;
           class S4BActiveSessionInfo;
           class S4BRegistrationStatusHandler;
           class S4BRegistrationStatus;
           class CallerID;
           class SignedIntegerCallback;
           class VoIPStatus;
           class VoIPError;
     class SkypeComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );
        delegate FUNCTION S4BContactListResponseHandler ( S4BContactListResponse resp );
        delegate FUNCTION S4BSelectedItemChangeHandler ( S4BSelectedItem item );
        delegate FUNCTION S4BSessionListResponseHandler ( S4BSessionListResponse resp );
        delegate FUNCTION S4BActiveSessionInfoHandler ( S4BActiveSessionInfo Info );
        delegate FUNCTION S4BRegistrationStatusHandler ( S4BRegistrationStatus reg );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID , STRING EndPointName );
        FUNCTION OnHook ();
        FUNCTION OffHook ();
        FUNCTION HookToggle ();
        FUNCTION Hold ();
        FUNCTION Resume ();
        FUNCTION Reject ();
        FUNCTION Accept ();
        FUNCTION Leave ();
        FUNCTION KeypadPress ( STRING digit );
        FUNCTION KeypadRelease ( STRING digit );
        FUNCTION KeypadClear ();
        FUNCTION KeypadBackspace ();
        FUNCTION KeypadDial ();
        FUNCTION DialString ( STRING dial );
        FUNCTION MeetNow ();
        FUNCTION JoinMeeting ( STRING url );
        FUNCTION JoinConference ( STRING url );
        FUNCTION SelectSession ( INTEGER index );
        FUNCTION ResetList ();
        FUNCTION SelectListItem ( INTEGER index );
        FUNCTION DialContact ();
        FUNCTION AddContactActiveSession ();
        FUNCTION AddContactToGroup ();
        FUNCTION RemoveContactFromGroup ();
        FUNCTION RemoveContactFromAllGroups ();
        FUNCTION CreateSessionUsingSelection ();
        FUNCTION DeleteGroup ();
        FUNCTION SetFilterSearchText ( STRING filter );
        FUNCTION ResetFilterSearch ();
        FUNCTION PerformSearch ();
        FUNCTION CreateGroup ( STRING Group );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty StringCallback OnKeypadTextChange;
        DelegateProperty StringCallback OnFilterSearchTextChange;
        DelegateProperty S4BContactListResponseHandler OnContactListUpdate;
        DelegateProperty S4BSelectedItemChangeHandler OnSelectedItemChange;
        DelegateProperty S4BSessionListResponseHandler OnSessionListUpdate;
        DelegateProperty S4BActiveSessionInfoHandler OnActiveSessionInfoUpdate;
        DelegateProperty StringCallback OnErrorNotification;
        DelegateProperty S4BRegistrationStatusHandler OnRegistrationStatusChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class MacroComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID );
        FUNCTION RunMacro ( STRING MacroName );
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class GateComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID , STRING BoxName , INTEGER MicType , INTEGER TimeOutValue );
        FUNCTION StartGateReporting ();
        FUNCTION StopGateReporting ();
        FUNCTION ProcessSubscription ( ResponseMsg Msg );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnGateReportRunningChange;
        DelegateProperty IntegerCallback OnGatingChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class AnalogDialerComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION CallerIDCallback ( CallerID ID );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );

        // class events

        // class functions
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION Configure ( INTEGER CommandProcessorID , STRING EndPointName );
        FUNCTION OnHook ();
        FUNCTION OffHook ();
        FUNCTION HookFlash ();
        FUNCTION Redial ();
        FUNCTION DialNumber ( STRING number );
        FUNCTION Dial ();
        FUNCTION ClearKeypadText ();
        FUNCTION BackSpaceKeypadText ();
        FUNCTION DigitPressed ( STRING Digit );
        FUNCTION DigitReleased ( STRING Digit );
        FUNCTION AutoAnswerRingCount ( INTEGER ringCount );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnIncomingCallChange;
        DelegateProperty IntegerCallback OnIncomingRingChange;
        DelegateProperty CallerIDCallback OnCallerIDNotification;
        DelegateProperty IntegerCallback OnCallDurationChange;
        DelegateProperty IntegerCallback OnAutoAnswerChange;
        DelegateProperty IntegerCallback OnHookChange;
        DelegateProperty StringCallback OnKeypadTextChange;
        DelegateProperty StringCallback OnLocalNumberChange;
        DelegateProperty StringCallback OnLastNumberDialedChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class EPGenericComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION SignedIntegerCallback ( SIGNED_INTEGER value );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID , INTEGER SignalType , STRING EndPointName , STRING BlockNumber , STRING ParameterName );
        FUNCTION SetDigital ( INTEGER state );
        FUNCTION ToggleDigital ();
        FUNCTION SetAnalog ( SIGNED_INTEGER value );
        FUNCTION SetSerial ( STRING value );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnDigitalChange;
        DelegateProperty SignedIntegerCallback OnAnalogChangeSigned;
        DelegateProperty StringCallback OnSerialChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class RoomGenericComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION SignedIntegerCallback ( SIGNED_INTEGER value );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID , INTEGER SignalType , INTEGER RoomNumber , INTEGER Option , STRING P1 , STRING P2 );
        FUNCTION SetDigital ( INTEGER state );
        FUNCTION ToggleDigital ();
        FUNCTION SetAnalog ( SIGNED_INTEGER value );
        FUNCTION SetSerial ( STRING value );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnDigitalChange;
        DelegateProperty SignedIntegerCallback OnAnalogChangeSigned;
        DelegateProperty StringCallback OnSerialChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class VoIPDialerComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );
        delegate FUNCTION VoIPStatusCallback ( VoIPStatus msg );
        delegate FUNCTION VoIPErrorCallback ( VoIPError errors );

        // class events

        // class functions
        FUNCTION Reject ( INTEGER Line );
        FUNCTION Hold ();
        FUNCTION Transfer ();
        FUNCTION BlindTransfer ();
        FUNCTION Conference ( INTEGER Line );
        FUNCTION Redial ();
        FUNCTION MuteOn ();
        FUNCTION MuteOff ();
        FUNCTION MuteToggle ();
        FUNCTION OnHook ();
        FUNCTION OffHook ();
        FUNCTION HookToggle ();
        FUNCTION CallForwardDisable ();
        FUNCTION CallForwardEnable ();
        FUNCTION CallForwardBusy ();
        FUNCTION CallForwardNoAnswer ();
        FUNCTION DNDDisable ();
        FUNCTION DNDCallMute ();
        FUNCTION DNDCallReject ();
        FUNCTION ClearErrors ();
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION Configure ( INTEGER CommandProcessorID , STRING EndPointName );
        FUNCTION SelectLine ( INTEGER Line );
        FUNCTION DialNumber ( STRING number );
        FUNCTION Dial ();
        FUNCTION ClearKeypadText ();
        FUNCTION BackSpaceKeypadText ();
        FUNCTION DigitPressed ( STRING Digit );
        FUNCTION DigitReleased ( STRING Digit );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty StringCallback OnKeypadTextChange;
        DelegateProperty VoIPStatusCallback OnVoIPStatusChange;
        DelegateProperty VoIPErrorCallback OnVoIPErrorChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class MTComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION SignedIntegerCallback ( SIGNED_INTEGER value );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID , STRING InputEndPointName , STRING OutputEndPointName , INTEGER CrosspointType , INTEGER StepValue );
        FUNCTION SetCrosspoint ( INTEGER value );
        FUNCTION ToggleCrosspoint ();
        FUNCTION ClearCrosspoint ();
        FUNCTION SetAttenutionDB ( SIGNED_INTEGER value );
        FUNCTION SetAttenutionPercent ( INTEGER value );
        FUNCTION Raise ();
        FUNCTION Lower ();
        FUNCTION Stop ();
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty SignedIntegerCallback OnAttenutationDBChange;
        DelegateProperty IntegerCallback OnAttenutationPercentChange;
        DelegateProperty IntegerCallback OnCrosspointChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class GainComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION SignedIntegerCallback ( SIGNED_INTEGER value );

        // class events

        // class functions
        FUNCTION Configure ( INTEGER CommandProcessorID , INTEGER GainType , STRING EndPointName , INTEGER StepValue );
        FUNCTION SetPercentageValue ( INTEGER value );
        FUNCTION SetDBValue ( SIGNED_INTEGER value );
        FUNCTION Raise ();
        FUNCTION Lower ();
        FUNCTION Stop ();
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( ResponseMsg msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnPercentageChange;
        DelegateProperty SignedIntegerCallback OnDBChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

namespace ClearonePro2LIB.ClearonePro2_Support;
        // class declarations
         class GATEMsg;
         class S4BSessionStatus;
         class S4BSession;
         class GateInfo;
         class ResponseMsg;
         class StackResponseMsg;
         class StackMsg;
         class BoxMsg;
         class S4BGroup;
         class MCCFMsg;
         class MCCFResponseMsg;
         class GATEResponseMsg;
         class ParserUtil;
         class MTResponseMsg;
         class CrosspointTypes;
         class MTMsg;
         class EPMsg;
         class S4BGroupMember;
         class BoxResponseMsg;
         class S4BSelectedItem;
         class RoomResponseMsg;
         class GATEREPORTResponseMsg;
         class EPResponseMsg;
         class S4BSessionListResponse;
         class S4BRegState;
         class S4BRegistrationStatus;
         class S4BListType;
         class S4BListFunction;
         class S4BContactListResponse;
         class StateChangeTypes;
         class NotificationIndicationTypes;
         class NotificationIndicationStatusTypes;
         class CallForwardWaitingStates;
         class CallForwardWaitingStatus;
         class DND_Status;
         class VoipLineState;
         class VoIPStatus;
         class S4BActiveSessionInfo;
         class ResponseMessageType;
         class EndPointType;
         class VoIPError;
         class RoomOption;
         class ModeType;
         class RoomMsg;
         class CallerID;
     class GATEMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING BoxName[];
        INTEGER TimeOutValue;
        INTEGER ReportNumber;
    };

    static class S4BSessionStatus // enum
    {
        static SIGNED_LONG_INTEGER UNKNOWN;
        static SIGNED_LONG_INTEGER IDLE;
        static SIGNED_LONG_INTEGER CONNECTING;
        static SIGNED_LONG_INTEGER RINGING;
        static SIGNED_LONG_INTEGER BUSY;
        static SIGNED_LONG_INTEGER ACTIVE;
        static SIGNED_LONG_INTEGER HOLD;
        static SIGNED_LONG_INTEGER INCOMING;
        static SIGNED_LONG_INTEGER CONFERENCE_JOIN;
        static SIGNED_LONG_INTEGER INVITE_JOIN_AUDIO;
    };

     class S4BSession 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ID[];
        S4BSessionStatus Status;
        STRING ContactUrl[];
        STRING DisplayName[];
        INTEGER StatusValue;
        STRING StatusText[];
    };

     class GateInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER ID;
        INTEGER Bitmask;
    };

     class ResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ResponseMessageType Type;
    };

     class StackResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        StackMsg Message;
        ResponseMessageType Type;
    };

     class StackMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING BlockNumber[];
        STRING ParameterName[];
        STRING Value[];
    };

     class BoxMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING BoxName[];
        STRING BlockNumber[];
        STRING ParameterName[];
        STRING Value[];
    };

     class S4BGroup 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ID[];
        STRING Name[];
    };

     class MCCFMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING MacroName[];
    };

     class MCCFResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MCCFMsg Message;
        ResponseMessageType Type;
    };

     class GATEResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        GATEMsg Message;
        ResponseMessageType Type;
    };

     class ParserUtil 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class MTResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MTMsg Message;
        ResponseMessageType Type;
    };

    static class CrosspointTypes // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Crosspoint;
        static SIGNED_LONG_INTEGER Gated;
        static SIGNED_LONG_INTEGER NonGated;
        static SIGNED_LONG_INTEGER PreAEC;
        static SIGNED_LONG_INTEGER Unknown;
    };

     class MTMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING InputEndPointName[];
        STRING OutputEndPointName[];
        STRING State[];
        STRING Attenuation[];
        CrosspointTypes CrosspointType;
    };

     class EPMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING EndPointName[];
        STRING BlockNumber[];
        STRING ParameterName[];
        STRING Value[];
    };

     class S4BGroupMember 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING DialNumber[];
    };

     class BoxResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BoxMsg Message;
        ResponseMessageType Type;
    };

     class S4BSelectedItem 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        S4BListType Type;
        STRING DisplayName[];
        STRING Group[];
    };

     class RoomResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        RoomMsg Message;
        ResponseMessageType Type;
    };

     class GATEREPORTResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        GATEMsg Message;
        ResponseMessageType Type;
    };

     class EPResponseMsg 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        EPMsg Message;
        ResponseMessageType Type;
    };

     class S4BSessionListResponse 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION GetItem ( INTEGER index , BYREF S4BSession session );
        FUNCTION set_Item ( SIGNED_LONG_INTEGER index , S4BSession value );
        FUNCTION Add ( S4BSession item );
        SIGNED_LONG_INTEGER_FUNCTION BinarySearch ( S4BSession item );
        FUNCTION Clear ();
        FUNCTION CopyTo ( S4BSession array[] );
        SIGNED_LONG_INTEGER_FUNCTION IndexOf ( S4BSession item );
        FUNCTION Insert ( SIGNED_LONG_INTEGER index , S4BSession item );
        SIGNED_LONG_INTEGER_FUNCTION LastIndexOf ( S4BSession item );
        FUNCTION RemoveAt ( SIGNED_LONG_INTEGER index );
        FUNCTION RemoveRange ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER count );
        FUNCTION Reverse ();
        FUNCTION Sort ();
        FUNCTION TrimExcess ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER ActiveItem;
        INTEGER Count;
        SIGNED_LONG_INTEGER Capacity;
    };

    static class S4BRegState // enum
    {
        static SIGNED_LONG_INTEGER UNKNOWN;
        static SIGNED_LONG_INTEGER REGISTERED;
        static SIGNED_LONG_INTEGER NOT_REGISTERED;
        static SIGNED_LONG_INTEGER NO_PROXY_DEFINED;
    };

     class S4BRegistrationStatus 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        S4BRegState State;
        INTEGER Status;
        STRING StatusText[];
    };

    static class S4BListType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Groups;
        static SIGNED_LONG_INTEGER Contacts;
        static SIGNED_LONG_INTEGER InfoOnly;
    };

    static class S4BListFunction // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER SelectGroup;
        static SIGNED_LONG_INTEGER SelectContact;
        static SIGNED_LONG_INTEGER AddToGroup;
        static SIGNED_LONG_INTEGER Searching;
    };

     class S4BContactListResponse 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION GetItem ( INTEGER index );
        STRING_FUNCTION get_Item ( SIGNED_LONG_INTEGER index );
        FUNCTION set_Item ( SIGNED_LONG_INTEGER index , STRING value );
        FUNCTION Add ( STRING item );
        SIGNED_LONG_INTEGER_FUNCTION BinarySearch ( STRING item );
        FUNCTION Clear ();
        SIGNED_LONG_INTEGER_FUNCTION IndexOf ( STRING item );
        FUNCTION Insert ( SIGNED_LONG_INTEGER index , STRING item );
        SIGNED_LONG_INTEGER_FUNCTION LastIndexOf ( STRING item );
        FUNCTION RemoveAt ( SIGNED_LONG_INTEGER index );
        FUNCTION RemoveRange ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER count );
        FUNCTION Reverse ();
        FUNCTION Sort ();
        FUNCTION TrimExcess ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        S4BListType Type;
        S4BListFunction Function;
        STRING HelpText[];
        INTEGER Count;
        SIGNED_LONG_INTEGER Capacity;
    };

    static class StateChangeTypes // enum
    {
        static SIGNED_LONG_INTEGER UNKNOWN;
        static SIGNED_LONG_INTEGER IDLE;
        static SIGNED_LONG_INTEGER DIAL_TONE;
        static SIGNED_LONG_INTEGER DIALING;
        static SIGNED_LONG_INTEGER INPROCESS;
        static SIGNED_LONG_INTEGER RINGING;
        static SIGNED_LONG_INTEGER BUSY;
        static SIGNED_LONG_INTEGER ACTIVE;
        static SIGNED_LONG_INTEGER HOLD;
        static SIGNED_LONG_INTEGER INCOMING;
        static SIGNED_LONG_INTEGER CFW;
        static SIGNED_LONG_INTEGER CONFERENCE_ACTIVE;
        static SIGNED_LONG_INTEGER CONFERENCE_HOLD;
        static SIGNED_LONG_INTEGER TRANSFER_ACTIVE;
        static SIGNED_LONG_INTEGER TRANSFER_HOLD;
        static SIGNED_LONG_INTEGER TRANSFERRING_DIAL_TONE;
        static SIGNED_LONG_INTEGER TRANSFERRING_DIALING;
        static SIGNED_LONG_INTEGER TRANSFERRING_INPROCESS;
        static SIGNED_LONG_INTEGER TRANSFERRING_RINGING;
        static SIGNED_LONG_INTEGER TRANSFERRING_BUSY;
        static SIGNED_LONG_INTEGER TRANSFERRING_ACTIVE;
        static SIGNED_LONG_INTEGER TRANSFERRING_HOLD;
        static SIGNED_LONG_INTEGER BLIND_TRANSFER_HOLD;
        static SIGNED_LONG_INTEGER BLIND_TRANSFERRING_DIAL_TONE;
        static SIGNED_LONG_INTEGER BLIND_TRANSFERRING_DIALING;
        static SIGNED_LONG_INTEGER BLIND_TRANSFERRING_INPROCESS;
        static SIGNED_LONG_INTEGER BLIND_TRANSFERRING_RINGING;
    };

    static class NotificationIndicationTypes // enum
    {
        static SIGNED_LONG_INTEGER HOLD;
        static SIGNED_LONG_INTEGER MUTE;
        static SIGNED_LONG_INTEGER PARTY_LINE;
        static SIGNED_LONG_INTEGER RINGBACK;
        static SIGNED_LONG_INTEGER RINGING;
        static SIGNED_LONG_INTEGER CALL_WAITING_CALLEE;
        static SIGNED_LONG_INTEGER BUSY;
        static SIGNED_LONG_INTEGER WARNING_ERR;
    };

    static class NotificationIndicationStatusTypes // enum
    {
        static SIGNED_LONG_INTEGER OFF;
        static SIGNED_LONG_INTEGER ON;
        static SIGNED_LONG_INTEGER BLINK;
    };

    static class CallForwardWaitingStates // enum
    {
        static SIGNED_LONG_INTEGER INACTIVE;
        static SIGNED_LONG_INTEGER INPROCESS;
        static SIGNED_LONG_INTEGER ACTIVE;
    };

    static class CallForwardWaitingStatus // enum
    {
        static SIGNED_LONG_INTEGER DISABLED;
        static SIGNED_LONG_INTEGER UNCONDITIONAL;
        static SIGNED_LONG_INTEGER BUSY;
        static SIGNED_LONG_INTEGER NO_REPLY;
    };

    static class DND_Status // enum
    {
        static SIGNED_LONG_INTEGER DND_NOT_SET;
        static SIGNED_LONG_INTEGER DND_CALL_MUTE;
        static SIGNED_LONG_INTEGER DND_CALL_REJECT;
    };

     class VoipLineState 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER LineLEDState;
        INTEGER LineStatus;
        STRING LineStatusText[];
        STRING LineInfo[];
        INTEGER LineID;
    };

     class VoIPStatus 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ClearStatus ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER HoldStatus;
        INTEGER MuteStatus;
        INTEGER RingBackStatus;
        INTEGER RingingStatus;
        INTEGER CallForwardState;
        INTEGER CallForwardStatus;
        STRING CallForwardStatusText[];
        INTEGER DNDStatus;
        STRING DNDStatusText[];
        INTEGER BusyStatus;
        INTEGER WarningErrorStatus;
        INTEGER CallWaiting;
        VoipLineState LineStatus[];
    };

     class S4BActiveSessionInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING MeetingID[];
        STRING Url[];
        INTEGER Status;
        INTEGER Is_Conference;
        STRING StatusText[];

        // class properties
    };

    static class ResponseMessageType // enum
    {
        static SIGNED_LONG_INTEGER STACK;
        static SIGNED_LONG_INTEGER BOX;
        static SIGNED_LONG_INTEGER ROOM;
        static SIGNED_LONG_INTEGER EP;
        static SIGNED_LONG_INTEGER MT;
        static SIGNED_LONG_INTEGER MCCF;
        static SIGNED_LONG_INTEGER GATE;
        static SIGNED_LONG_INTEGER GATEREPORT;
        static SIGNED_LONG_INTEGER PROMPT_ONLY;
        static SIGNED_LONG_INTEGER UNKNOWN;
    };

    static class EndPointType // enum
    {
        static SIGNED_LONG_INTEGER MIC;
        static SIGNED_LONG_INTEGER TELCO_RX;
        static SIGNED_LONG_INTEGER TELCO_TX;
        static SIGNED_LONG_INTEGER VOIP_RX;
        static SIGNED_LONG_INTEGER VOIP_TX;
        static SIGNED_LONG_INTEGER OUTPUT;
        static SIGNED_LONG_INTEGER SPEAKER;
        static SIGNED_LONG_INTEGER PROC;
        static SIGNED_LONG_INTEGER FADER;
        static SIGNED_LONG_INTEGER BFM;
        static SIGNED_LONG_INTEGER USB_RX;
        static SIGNED_LONG_INTEGER USB_TX;
        static SIGNED_LONG_INTEGER UA;
        static SIGNED_LONG_INTEGER GPIO;
        static SIGNED_LONG_INTEGER SGEN;
        static SIGNED_LONG_INTEGER SRMIC;
        static SIGNED_LONG_INTEGER DANTE_RX;
        static SIGNED_LONG_INTEGER DANTE_TX;
        static SIGNED_LONG_INTEGER SFBUA;
    };

     class VoIPError 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ClearStatus ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ErrorText1[];
        STRING ErrorText2[];
        STRING ErrorText3[];
        STRING ErrorText4[];
    };

    static class RoomOption // enum
    {
        static SIGNED_LONG_INTEGER Mode;
        static SIGNED_LONG_INTEGER WallState;
        static SIGNED_LONG_INTEGER Select;
        static SIGNED_LONG_INTEGER PresetState;
        static SIGNED_LONG_INTEGER IndividualDividerState;
        static SIGNED_LONG_INTEGER DividerPolarity;
        static SIGNED_LONG_INTEGER DividerState;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class ModeType // enum
    {
        static SIGNED_LONG_INTEGER Normal;
        static SIGNED_LONG_INTEGER GPIO;
    };

     class RoomMsg 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Reinitialize ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER RoomNumber;
        RoomOption Option;
        STRING P1[];
        STRING P2[];
        STRING Value[];
    };

     class CallerID 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Time[];
        STRING Date[];
        STRING PhoneNumber[];
        STRING Name[];
    };

namespace ClearonePro2LIB.Comm;
        // class declarations
         class RS232TransportComm;
         class TelnetTransportComm;
     class TelnetTransportComm 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION SetIPAddress ( STRING IPAddress );
        FUNCTION Connect ();
        FUNCTION Disconnect ();
        FUNCTION Dispose ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace ClearonePro2LIB.CCI_Support;
        // class declarations

