//
//  HeadType.h
//  NetView
//
//  Created by Shengwei Ren on 8/15/11.
//  Copyright 2011 Tsinghua University. All rights reserved.
//

#ifndef NetView_HeadType_h
#define NetView_HeadType_h

#define APP_NAME @"MyNetVue"
#define APP_VERSION @"1.3.6"
#define UCID @"82db69b981"

#define FAKE_DATA 0

#define SinaWeiBo_APPKey @"3885028942"
#define SinaWeiBo_APPSecret @"113fcb325231f0873afa237f5efa2dae"
#define SinaWeiBo_RedirectUrl @"http://www.mynetvue.com"
#define Facebook_APPID @"362148300468447"
#define AdMob_PublisherID @"a14f4b4fd068d70"

#define LOGO_X 80
#define LOGO_Y 13
#define LOGO_W 140
#define LOGO_H 18
#define LOGO @"logo.png"
#define LOGO2x @"logo@2x.png"
#define TITLE_X 131
#define TITLE_Y 13
#define TITLE_W 118
#define TITLE_H 23
#define NAV_BG @"navigationbar_bg.png"
//#define VIEW_BG @"view_bg1.png"
#define VIEW_BG @"login_background.png"
#define BACK_BUTTON_BG @"back_button.png"
#define BAR_BUTTON_BG @"bar_button_item_bg.png"
#define BACK_BUTTON_X 8
#define BACK_BUTTON_Y 6
#define BACK_BUTTON_W 60
#define BACK_BUTTON_H 40
#define BAR_BUTTON_X 314
#define BAR_BUTTON_Y 6
#define BAR_BUTTON_W 60
#define BAR_BUTTON_H 40
#define HEADER_X 0
#define HEADER_Y 0
#define HEADER_W 380
#define HEADER_H 50



//#define APP_SERVER1 @"192.168.0.6:80"
//#define APP_SERVER1 @"thrtest.mynetvue.com:90"
//#define APP_SERVER2 @"thrtest.mynetvue.com:90"
//#define APP_SERVER3 @"thrtest.mynetvue.com:90"
//#define NET_DEFAULT_SERVER_PORT 90
#define APP_SERVER1 @"app3.mynetvue.com:80" //@"app1.mynetvue.com:80"
#define APP_SERVER2 @"appgate1.mynetvue.com:80"
#define APP_SERVER3 @"appgate2.mynetvue.com:80"
#define NET_DEFAULT_SERVER_PORT 80
#define NET_DEFAULT_SERVER_PLAYASSIT_PORT 443

#define APP_PROD_SERVER1_IP @"app3.mynetvue.com"
#define APP_PROD_SERVER1_PORT 80
#define APP_TEST_SERVER1_IP @"thrtest.mynetvue.com"
#define APP_TEST_SERVER1_PORT 90
#define APP_TEST_SERVER1_PREFIX @"thrtest"

#define INDICATOR_X 55
#define INDICATOR_Y 260

#define ACTION_FAILED_MSG_CN @"因网络原因操作失败，请再试一次"
#define ACTION_FAILED_MSG_EN @"Network error, please try again"

#define MC_S3_BUCKETNAME @"mynetvue-motioncapture-us"
#define MC_S3_KEYFORMAT @"%@/%@/%@.jpg"
#define MC_TVM_POLICYTYPE @"10"
#define MC_LOCAL_STORPATH_ROOT @"/Documents/MC/"
#define MC_LOCAL_STORPATH_FORMAT @"%@/%@"
#define GETMOVELIST_TYPE_NEWER_1 2
#define GETMOVELIST_TYPE_OLDER_1 3

//protocol
#define KEY_APNS_TYPE @"pns_type"
#define VALUE_APNS_TYPE_APPLE @"apple_1"
#define VALUE_APNS_TYPE_UNKNOWN @"unknown"
#define KEY_APNS_DTOKEN @"apns_dtoken"
#define KEY_PNS_LOCALE @"pns_locale"
#define VALUE_PNS_LOCALE_EN @"en"
#define VALUE_PNS_LOCALE_CN @"cn"
#define KEY_PNS_TIMEZONE @"pns_TZ"
#define VALUE_PNS_TIMEZONE_DEFAULT @"GMT"
//local 
#define KEY_DEVICETOKEN @"key_apns_devicetoken"
#define KEY_LOCALE @"key_locale"
#define KEY_TIMEZONE @"key_timezone"


#define KEY_CAMERASETTING_PNS @"pns"
#define KEY_CAMERASETTING_LOCAL @"local"
#define KEY_CAMERASETTING_LOCAL_ALERTON @"alert_on"
#define KEY_CAMERASETTING_LOCAL_IRON @"ir_on"
#define KEY_CAMERASETTING_PNS_ON @"on"
#define KEY_CAMERASETTING_PNS_BEGIN @"begin"
#define KEY_CAMERASETTING_PNS_END @"end"
#define KEY_CAMERASETTING_LOCAL_AUDIOON @"audio_on"
#define KEY_CAMERASETTING_LOCAL_THEXON @"thex_on"
#define KEY_CAMERASETTING_LOCAL_MIN_TEMPERATURE @"min_t"
#define KEY_CAMERASETTING_LOCAL_MAX_TEMPERATURE @"max_t"
#define KEY_CAMERASETTING_LOCAL_MIN_HUMIDITY @"min_h"
#define KEY_CAMERASETTING_LOCAL_MAX_HUMIDITY @"max_h"


#define FFMPEG_WRITE_PROTOCOL_NAME "iosw"
#define FFMPEG_WRITE_PROTOCOL_PRIFIX "iosw:"
#define FFMPEG_READ_PROTOCOL_NAME "memr"
#define FFMPEG_READ_PROTOCOL_PREFIX "memr:"
#define FFMPEG_READ_DEFAULT_FILE "memr:1";

#define DIALOG_VC_HEIGHT 512
#define DIALOG_VC_WIDTH 380

#define NETVIEW_ERR_PKT 0x01
#define NETVIEW_OOK_PKT 0x02
#define NETVIEW_SELECTSERVER_REQPKT 118
#define NETVIEW_SELECTSERVER_ACKPKT 119
#define NETVIEW_SELECTHOSTINGSERVER_REQPKT 120
#define NETVIEW_SELECTHOSTINGSERVER_ACKPKT 121
#define NETVIEW_REGPNS_REQPKT 123
#define NETVIEW_GETCAMERASETTING_REQPKT 124
#define NETVIEW_GETCAMERASETTING_ACKPKT 125
#define NETVIEW_SETCAMERAPNSSETTING_REQPKT 126
#define NETVIEW_GETMOVELIST_REQPKT 127
#define NETVIEW_GETMOVELIST_ACKPKT 128
#define NETVIEW_SETCAMERALOCALSETTING_REQPKT 129
#define NETVIEW_SETCAMERAALERT_REQPKT 130
#define NETVIEW_SETCAMERAIR_REQPKT 132

#define NETVIEW_CHANGE_USERPASS_REQPKT 134
#define NETVIEW_CHANGE_CAMNAME_REQPKT 135
#define NETVIEW_RECOVER_USERPASS_REQPKT 136
#define NETVIEW_GETCAMERA_LIVEINFO_REQPKT 137
#define NETVIEW_GETCAMERA_LIVEINFO_ACKPKT 138

#define NETVIEW_CLIENTGET_CAMERA_ISON_REQPKT 141
#define NETVIEW_CLIENTGET_CAMERA_ISON_ACKPKT 142
#define NETVIEW_CLIENTGET_MEMBER_SETTING_REQPKT 143
#define NETVIEW_CLIENTGET_MEMBER_SETTING_ACKPKT 144
#define NETVIEW_CLIENTGET_AWS_TOKEN_REQPKT 145
#define NETVIEW_CLIENTGET_AWS_TOKEN_ACKPKT 146

#define NETVIEW_SETCAMERA_AUDIO_REQPKT 147

#define NETVIEW_CLIENTGET_NEWEST_TH_REQPKT 163
#define NETVIEW_CLIENTGET_NEWEST_TH_ACKPKT 164
#define NETVIEW_CLIENTSET_TH_THRESHOLD_REQPKT 165
#define NETVIEW_CLIENTSET_TH_THRESHOLD_ACKPKT 166

#define NETVIEW_CHKNAT_REQPKT 0x12
#define NETVIEW_SYMNAT_ACKPKT 0x17
#define NETVIEW_NATTYPE_PKT 0x1c
#define NETVIEW_FCNAT_REQPKT 0x14
#define NETVIEW_FCNAT_ACKPKT 0x15
#define NETVIEW_SYMIP_NAT 0x02
#define NETVIEW_PAYLOAD_DTPKT 0x29
#define NETVIEW_CLIENT_TCPLANACK_PKT 0x0f
#define NETVIEW_CLIENT_TCPTRAACK_PKT 0x11
#define NETVIEW_CLIENT_TCPTRAREQ_PKT 0x10
#define NETVIEW_CLIENT_TCPLANREQ_PKT 0x0e
#define NETVIEW_CLIENT_UDPNATACK_PKT 0x07
#define NETVIEW_CLIENT_UDPNATREQ_PKT 0x6
#define NETVIEW_CLIENT_REQCMD_PKT 0x2a
#define NETVIEW_NATTRAV_REQPKT 0x1d
#define NETVIEW_CLIENT_HTBEAT_PKT 0x03
#define NETVIEW_NATTRAV_ACKPKT 0x1e

#define NETVIEW_UDPNAT_TASK_TRYPKT 0x37
#define NETVIEW_UDPNAT_TASK_ACKPKT 0x38

#define NETVIEW_MYCAM_LIST_REQPKT 0x70
#define NETVIEW_SHAREDCAM_LIST_REQPKT 0x72
#define NETVIEW_FRIENDCAM_LIST_REQPKT 0x74

#define NETVIEW_LOGIN_REQPKT 0x64
#define NETVIEW_CAMLIST_REQPKT 0x66
#define NETVIEW_SHARECAM_REQPKT 0x68
#define NETVIEW_RVKCAM_REQPKT 0x6a
#define NETVIEW_ADDCAM_REQPKT 0x6c
#define NETVIEW_REMOVE_MYCAM_REQPKT 0x6e
#define NETVIEW_REMOVE_FDCAM_REQPKT 0x66
#define NETVIEW_REGISTER_USER_REQPKT 0x62
#define NETVIEW_TRANSERVER_CLIENT_LOGIN_PKT 0x35
#define NETVIEW_NORMAL_TRAN_CHANNEL_CREATED_INFO_PKT 49

#define NPT_SERVER 0x1
#define NPT_CAMERA 0x2
#define NPT_EXCEPTION 0x3
#define NPT_VIDEO_DATA 0x4
#define NPT_AUDIO_DATA 0x5
#define NPT_NVR_COMMAND 0x6
#define NPT_SENSOR_DATA 0x8

#define CPT_SENSOR_HUMIDITY 0x81
#define CPT_SENSOR_TEMPERATURE 0x80
#define CPT_CONTROL_DRIVE_MOTO1 0x51
#define CPT_CONTROL_DRIVE_PTZ 0x50
#define CPT_CONTROL_RESTART_CAMERA 0x40
#define CPT_CONTROL_RESTART_SYSTEM 0x41
#define CPT_WIFI_CONFIGURE 0x31
#define CPT_WIFI_INFO 0x30
#define CPT_FIRMWARE_UPDATE 0x21
#define CPT_FIRMWARE_INFO 0x20
#define CPT_VIDEO_END 0x16
#define CPT_VIDEO_STOP 0x15
#define CPT_VIDEO_PAUSE 0x14
#define CPT_VIDEO_START 0x13
#define CPT_VIDEO_SELECT 0x12
#define CPT_VIDEO_STATUS 0x11
#define CPT_VIDEO_INFO 0x10
#define CPT_CAMERA_INFO 0x00

#define NETVIEW_COMMAND_SIZE 0x200
#define SNDPKT_LENGTH 64
#define NETVIEW_PAYLOAD_SIZE 0x10000
#define NETVIEW_CMDPKT_SIZE 512
#define NETVIEW_SOCKET_TIMEOUT 5
#define UDPNAT_TIMEOUT 3
#define NETVIEW_PKTHEAD_SIZE 16
#define NETVIEW_MAXID_SIZE 16
#define NETVIEW_MYCAMERANODE_SIZE (NETVIEW_MAXID_SIZE * 2 + 4)
#define NETVIEW_SHARECAMERANODE_SIZE (NETVIEW_MAXID_SIZE * 3 + 4)
#define NETVIEW_FRIENDCAMERANODE_SIZE (NETVIEW_MAXID_SIZE * 3 + 4)

#define CAMERA_TYPE_FRIEND 0xf3
#define CAMERA_TYPE_PRIVATE 0xf1
#define CAMERA_TYPE_SHARING 0xf2
#define CAMERA_TYPE_NONE 0xf4
#define CAMERA_TYPE_NIL 0xf5

#define CAMERA_TASK_VIEW 0xe0
#define CAMERA_TASK_CONFIGURE_WIFI 0xe1
#define CAMERA_TASK_LIST 0xe2
#define CAMERA_TASK_ALERT 0xe3

#define TASK_TYPE_LIVING 1
#define TASK_TYPE_REPLAY 2
#define TASK_TYPE_CONFIG_WIFI 3
#define TASK_TYPE_DOWNLOAD 4
#define TASK_TYPE_CMD 5

#define NOTIFICATION_NAME_NETWORK_STATE @"net_state"

#define NETVIEW_BRR_OK 0x00
#define NETVIEW_BRR_ERR_INVAILD_PARAM 0x01
#define NETVIEW_BRR_ERR_USER_NOT_EXIST 0x02
#define NETVIEW_BRR_ERR_USER_ALREADY_EXIST 0x03
#define NETVIEW_BRR_ERR_EMAIL_ALREADY_EXIST 0x04
#define NETVIEW_BRR_ERR_USER_PWD_NOTMATCH 0x05
#define NETVIEW_BRR_ERR_CMD_NOTSUPPORT 0x06
#define NETVIEW_BRR_ERR_SEED_TIMEOUT 0x07
#define NETVIEW_BRR_ERR_SEED_HASH_NOTMATCH 0x08
#define NETVIEW_BRR_ERR_SERVER_INTERNAL_ERROR 0x09
#define NETVIEW_BRR_ERR_ALREADY_FRIENDS 0x0a
#define NETVIEW_BRR_ERR_FACEBOOK_USER 0x0b
#define NETVIEW_BRR_ERR_DEVICE_ALREADY_REGTO_USER 0x0c
#define NETVIEW_BRR_ERR_DEVICE_NOT_EXIST 0x0d
#define NETVIEW_BRR_ERR_DEVICE_USER_NOTMATCH 0x0e
#define NETVIEW_BRR_ERR_DEVICE_NOTSHARE_TOYOU 0x0f
#define NETVIEW_BRR_ERR_USER_NOT_AUTHED 0x10
#define NETVIEW_BRR_ERR_TCPLAN_IMPOSSIBLE 0x11
#define NETVIEW_BRR_ERR_DEVICE_NOTONLINE 0x12
#define NETVIEW_BRR_ERR_TRANSERVER_NOT_EXIST 0x13
#define NETVIEW_BRR_ERR_TRANSERVER_ALREADY_LOGIN 0x14
#define NETVIEW_BRR_ERR_TRANSERVER_PWD_NOTMATCH 0x15
#define NETVIEW_BRR_ERR_TRANSERVER_UNAVALIBLE 0x16
#define NETVIEW_BRR_WAR_RENRENUID_NOT_FOUND 0x17
#define NETVIEW_BRR_WAR_FRIENDSHIP_ALREADY_EXIST 0x18
#define NETVIEW_BRR_WAR_FACEBOOKUID_NOT_FOUND 0x19
#define NETVIEW_BRR_ERR_USER_EMAIL_NOT_MATCH 0x1a
#define NETVIEW_BRR_ERR_RECOVER_PASSWORD_TOO_OFTEN 0x1b
#define NETVIEW_BRR_ERR_DEVICE_ALREADY_REG_TO_THISUSER 0x1c
#define NETVIEW_BRR_ERR_DEVICE_ALREADY_SHARE_TO_THISUSER 0x1d
#define NETVIEW_BRR_ERR_DEVICE_CANNOT_SHARE_TO_OWNER 0x1e
#define NETVIEW_BRR_ERR_USER_TARGET_NOT_EXISTS 0x1f
#define NETVIEW_BRR_ERR_UNKNOWN 0x9f

#define LOCAL_ERR_UNKNOWN 0xA0
#define LOCAL_ERR_RECV_PKT_INVALID 0xA1
#define LOCAL_ERR_RECV_TIMEOUT 0xA2
#define LOCAL_ERR_RECV_DATA_INVALID 0xA3
#define LOCAL_ERR_RECV_THREAD_CANCELLED 0xA4
#define LOCAL_ERR_SEND_FAILED 0xA5
#define LOCAL_ERR_TASK_CANCELLED 0xA6

#define NV_ERR_UNEXCEPT_BUSINESS 0xFF


//-------------------

#define NV_LOCAL_KEY_USERNAME @"username"
#define NV_LOCAL_KEY_PASSWORD @"password"
#define NV_LOCAL_KEY_YOUTUBE_USERNAME @"username@youtube"
#define NV_LOCAL_KEY_YOUTUBE_PASSWORD @"password@youtube"
#define NV_LOCAL_KEY_REPLAY_TYPE @"type@replay"
#define NV_LOCAL_KEY_SNAPSHOT_TYPE @"type@snapshot"

#define NV_LOCAL_KEY_VOIP_ENABLED_FORMAT @"voip_enabled_@%_@%"


#define NV_USERNAME_MIN_LENGTH 3
#define NV_USERNAME_MAX_LENGTH 20
#define NV_PASSWORD_MIN_LENGTH 6
#define NV_PASSWORD_MAX_LENGTH 20
#define NV_EMAIL_MIN_LENGTH 5
#define NV_EMAIL_MAX_LENGTH 64
#define NV_CAMERANAME_MIN_LENGTH 1
#define NV_CAMERANAME_MAX_LENGTH 20
#define NV_CAMERAID_MIN_LENGTH 1
#define NV_CAMERAID_MAX_LENGTH 20


//#define NETVIEW_ADDCAMERA_ERR_OFFLINE 18
//#define NETVIEW_ADDCAMERA_ERR_REGED 12
//#define NETVIEW_ADDCAMERA_ERR_NOTEXISTS 13

//=====for camera prot===
#define NETVIEW_CLIENT_LOGIN_REQPKT 0x04
#define NETVIEW_CLIENT_LOGIN_ACKPKT 0x05
#define NETVIEW_CLIENT_INFO_PKT 47
#define NETVIEW_CAMERA_ENCFLAG 0x11
#define NETVIEW_MD5SUM_SIZE 32
#define NETVIEW_DESKEY_SIZE 8
#define NETVIEW_TRANSERVER_CAMERA_LOGIN_PKT 54

#define PHONE_CAMERA_ID_PREFIX @"NVPCAM"

//for notification

#define PLAYER_NOTIFICATION_NAME @"netvue_play"
#define PLAYER_NOTIFICATION_INFO_KEY @"info"

#define PLAYER_NOTIFICATION_SENSOR_DATA @"sensor data"

#define NOTIFICATION_START_CONNECTING @"start connecting"
#define NOTIFICATION_START_PLAYING @"start playing"
#define NOTIFICATION_START_STOP @"stop updataImageview"

#define NOTIFICATION_ERROR @"error"
#define NOTIFICATION_FINISH @"finish"


#define MAIN_BUTTON_ADD 1
#define MAIN_BUTTON_DELETE 2
#define MAIN_BUTTON_CONFIG 3
#define MAIN_BUTTON_SHARE 4
#define MAIN_BUTTON_WIFI 5
#define MAIN_BUTTON_TALK 6
#define MAIN_BUTTON_RECORD 7
#define MAIN_BUTTON_SCREENSHOT 8
#define MAIN_TABS_MYCAM 9
#define MAIN_TABS_SHARECAM 10
#define MAIN_TABS_TOOTHER 11

#define INTERVAL_TYPE_NOW   0
#define INTERVAL_TYPE_YEAR   5
#define INTERVAL_TYPE_MONTH   4
#define INTERVAL_TYPE_DAY   3
#define INTERVAL_TYPE_HOUR   2
#define INTERVAL_TYPE_MINUTE   1

#define TABLE_TYPE_CAPTURE   0
#define TABLE_TYPE_CAPTURECOUNT   1

#define PLAYING_START_TYPE   0
#define CAPTURE_START_TYPE   1

//=============
#define CONNECT_MODE_UNKNOWN -1
#define CONNECT_MODE_TCPLAN 0
#define CONNECT_MODE_UDP 1
#define CONNECT_MODE_TCPTRAN 2
#define CONNECT_MODE_FAILED 3

#define AV_MODE_UNKNOWN 0
#define AV_MODE_VIDEO_AUDIO 1
#define AV_MODE_VIDEO_ONLY 2
#define AV_MODE_AUDIO_ONLY 3
#define AV_MODE_NO_AV 4


//==============
#define VIDEO_CHANNEL_TYPE_LIVE 0
#define VIDEO_CHANNEL_TYPE_DOWNLOAD 1
#define VIDEO_CHANNEL_TYPE_REPLAY 2

#define AV_CHANNEL_TYPE_LIVE 3
#define AV_CHANNEL_TYPE_DOWNLOAD 4
#define AV_CHANNEL_TYPE_REPLAY 5

#define PHONECAM_CHANNEL_TYPE_LIVE 6

#define GENERATION_0_UNKNOWN 0
#define GENERATION_1_VIDEO 1
#define GENERATION_2_AV 2
#define GENERATION_3_PHONE 3


//=================
#define RECORD_VIDEO_TEMP_FILE @"Tempvideo.mp4"
#define RECORD_AUDIO_TEMP_FILE @"Tempvideo.aac"
#define RECORD_AV_FILE @"MyNetVue.mp4"

#define DEFAULT_DATA_FORMAT @"yyyy-MM-dd HH:mm:ss"
#define DEFAULT_CAPTURE_FILENAME @"%@.jpg"
#define DEFAULT_CAPTURE_INSTAGRAM_FILENAME @"%@.igo"
#define DEFAULT_RECORD_FILENAME @"record"

//for drvie moto1
#define MOTO1_STOP 0
#define MOTO1_ORIENTATION_FORWARD 1
#define MOTO1_ORIENTATION_FORWARD_RIGHT 2
#define MOTO1_ORIENTATION_RIGHT 3
#define MOTO1_ORIENTATION_BACK_RIGHT 4
#define MOTO1_ORIENTATION_BACK 5
#define MOTO1_ORIENTATION_BACK_LEFT 6
#define MOTO1_ORIENTATION_LEFT 7
#define MOTO1_ORIENTATION_FORWARD_LEFT 8

#define NETVIEW_ALERT_CAPTURE 0
#define NETVIEW_ALERT_TEMPWITHHUM 1

#define PREID_CAMERA_1_VIDEO  1 //netvue I 视频
#define PREID_CAMERA_2_AV_IR  2    //netvue II 视频/音频/红外
#define PREID_BOX_1_NVR  3 //NVR 远程文件管理
#define PREID_CAMERA_3_PTZ  4 //netvue III 增加PTZ
#define PREID_CAMERA_4_BABY  5 //baby I 增加VoIP
#define PREID_ROBOT_1_CAR  6 //bot I 增加遥控
#define PREID_CAMERA_5_BABY  7// baby II 增加Voip/温湿度/ptz

#endif
