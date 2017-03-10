// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef dx_dialog_h
#define dx_dialog_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
extern Fl_Group *btn_select_host;
#include "flinput2.h"
extern Fl_Input2 *inp_dxcc_host_url;
#include <FL/Fl_Button.H>
extern Fl_Button *btn_show_host_tab;
extern Fl_Input2 *inp_dccc_host_port;
extern Fl_Input2 *inp_dccc_login;
#include <FL/Fl_Box.H>
extern Fl_Box *lbl_dxc_connected;
#include <FL/Fl_Check_Button.H>
#include "status.h"
extern Fl_Check_Button *btn_dxcc_connect;
extern Fl_Check_Button *btn_dxc_auto_connect;
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *cluster_tabs;
extern Fl_Group *tabDXclusterTelNetStream;
#include "FTextView.h"
extern FTextView *brws_tcpip_stream;
extern void dxc_click_m1(Fl_Button*, void*);
extern Fl_Button *dxc_macro_1;
extern void dxc_click_m2(Fl_Button*, void*);
extern Fl_Button *dxc_macro_2;
extern void dxc_click_m3(Fl_Button*, void*);
extern Fl_Button *dxc_macro_3;
extern void dxc_click_m4(Fl_Button*, void*);
extern Fl_Button *dxc_macro_4;
extern void dxc_click_m5(Fl_Button*, void*);
extern Fl_Button *dxc_macro_5;
extern void dxc_click_m6(Fl_Button*, void*);
extern Fl_Button *dxc_macro_6;
extern void dxc_click_m7(Fl_Button*, void*);
extern Fl_Button *dxc_macro_7;
extern void dxc_click_m8(Fl_Button*, void*);
extern Fl_Button *dxc_macro_8;
extern Fl_Input2 *inp_dxcluster_cmd;
extern Fl_Button *btn_cluster_spot;
extern Fl_Button *btn_cluster_submit;
extern Fl_Group *tabDXclusterReports;
#include <FL/Fl_Browser.H>
extern Fl_Browser *reports_header;
extern Fl_Browser *brws_dx_cluster;
extern Fl_Button *btn_dxc_cluster_clear;
extern Fl_Check_Button *brws_order;
extern Fl_Button *btn_cluster_spot2;
extern Fl_Group *tabDXclusterConfig;
extern Fl_Browser *brws_dxcluster_hosts;
extern void dxcluster_hosts_select(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_hosts_select;
extern void dxcluster_hosts_add(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_hosts_add;
extern void dxcluster_hosts_delete(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_hosts_delete;
extern void dxcluster_servers(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_servers;
extern FTextEdit *ed_telnet_cmds;
extern void dxcluster_hosts_load_setup(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_hosts_load_setup;
extern void dxcluster_hosts_save_setup(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_hosts_save_setup;
extern void dxcluster_hosts_send_setup(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_hosts_send_setup;
extern Fl_Check_Button *btn_spot_when_logged;
extern Fl_Check_Button *btn_dxc_hertz;
#include <FL/Fl_Input.H>
extern Fl_Input *mlabel_1;
extern Fl_Input2 *mtext_1;
extern Fl_Input *mlabel_2;
extern Fl_Input2 *mtext_2;
extern Fl_Input *mlabel_3;
extern Fl_Input2 *mtext_3;
extern Fl_Input *mlabel_4;
extern Fl_Input2 *mtext_4;
extern Fl_Input *mlabel_5;
extern Fl_Input2 *mtext_5;
extern Fl_Input *mlabel_6;
extern Fl_Input2 *mtext_6;
extern Fl_Input *mlabel_7;
extern Fl_Input2 *mtext_7;
extern Fl_Input *mlabel_8;
extern Fl_Input2 *mtext_8;
extern void dxcluster_ar_help(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_ar_help;
extern void dxcluster_cc_help(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_cc_help;
extern void dxcluster_dx_help(Fl_Button*, void*);
extern Fl_Button *btn_dxcluster_dx_help;
extern Fl_Group *tabDXclusterHelp;
extern FTextView *brws_dxc_help;
extern Fl_Button *btn_dxc_help_query;
extern Fl_Input2 *inp_help_string;
extern Fl_Button *btn_dxc_help_clear;
Fl_Double_Window* dxc_window();
#endif
