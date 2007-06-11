/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _REMOTE_PROTOCOL_H_RPCGEN
#define _REMOTE_PROTOCOL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#include "libvirt/libvirt.h"
#define REMOTE_MESSAGE_MAX 262144
#define REMOTE_STRING_MAX 65536

typedef char *remote_nonnull_string;

typedef remote_nonnull_string *remote_string;
#define REMOTE_DOMAIN_ID_LIST_MAX 16384
#define REMOTE_DOMAIN_NAME_LIST_MAX 1024
#define REMOTE_CPUMAP_MAX 256
#define REMOTE_VCPUINFO_MAX 2048
#define REMOTE_CPUMAPS_MAX 16384
#define REMOTE_NETWORK_NAME_LIST_MAX 256

typedef char remote_uuid[VIR_UUID_BUFLEN];

struct remote_nonnull_domain {
	remote_nonnull_string name;
	remote_uuid uuid;
	int id;
};
typedef struct remote_nonnull_domain remote_nonnull_domain;

struct remote_nonnull_network {
	remote_nonnull_string name;
	remote_uuid uuid;
};
typedef struct remote_nonnull_network remote_nonnull_network;

typedef remote_nonnull_domain *remote_domain;

typedef remote_nonnull_network *remote_network;

struct remote_error {
	int code;
	int domain;
	remote_string message;
	int level;
	remote_domain dom;
	remote_string str1;
	remote_string str2;
	remote_string str3;
	int int1;
	int int2;
	remote_network net;
};
typedef struct remote_error remote_error;

struct remote_vcpu_info {
	u_int number;
	int state;
	u_quad_t cpu_time;
	int cpu;
};
typedef struct remote_vcpu_info remote_vcpu_info;

struct remote_open_args {
	remote_string name;
	int flags;
};
typedef struct remote_open_args remote_open_args;

struct remote_get_type_ret {
	remote_nonnull_string type;
};
typedef struct remote_get_type_ret remote_get_type_ret;

struct remote_get_version_ret {
	quad_t hv_ver;
};
typedef struct remote_get_version_ret remote_get_version_ret;

struct remote_get_max_vcpus_args {
	remote_string type;
};
typedef struct remote_get_max_vcpus_args remote_get_max_vcpus_args;

struct remote_get_max_vcpus_ret {
	int max_vcpus;
};
typedef struct remote_get_max_vcpus_ret remote_get_max_vcpus_ret;

struct remote_node_get_info_ret {
	char model[32];
	quad_t memory;
	int cpus;
	int mhz;
	int nodes;
	int sockets;
	int cores;
	int threads;
};
typedef struct remote_node_get_info_ret remote_node_get_info_ret;

struct remote_get_capabilities_ret {
	remote_nonnull_string capabilities;
};
typedef struct remote_get_capabilities_ret remote_get_capabilities_ret;

struct remote_list_domains_args {
	int maxids;
};
typedef struct remote_list_domains_args remote_list_domains_args;

struct remote_list_domains_ret {
	struct {
		u_int ids_len;
		int *ids_val;
	} ids;
};
typedef struct remote_list_domains_ret remote_list_domains_ret;

struct remote_num_of_domains_ret {
	int num;
};
typedef struct remote_num_of_domains_ret remote_num_of_domains_ret;

struct remote_domain_create_linux_args {
	remote_nonnull_string xml_desc;
	int flags;
};
typedef struct remote_domain_create_linux_args remote_domain_create_linux_args;

struct remote_domain_create_linux_ret {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_create_linux_ret remote_domain_create_linux_ret;

struct remote_domain_lookup_by_id_args {
	int id;
};
typedef struct remote_domain_lookup_by_id_args remote_domain_lookup_by_id_args;

struct remote_domain_lookup_by_id_ret {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_lookup_by_id_ret remote_domain_lookup_by_id_ret;

struct remote_domain_lookup_by_uuid_args {
	remote_uuid uuid;
};
typedef struct remote_domain_lookup_by_uuid_args remote_domain_lookup_by_uuid_args;

struct remote_domain_lookup_by_uuid_ret {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_lookup_by_uuid_ret remote_domain_lookup_by_uuid_ret;

struct remote_domain_lookup_by_name_args {
	remote_nonnull_string name;
};
typedef struct remote_domain_lookup_by_name_args remote_domain_lookup_by_name_args;

struct remote_domain_lookup_by_name_ret {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_lookup_by_name_ret remote_domain_lookup_by_name_ret;

struct remote_domain_suspend_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_suspend_args remote_domain_suspend_args;

struct remote_domain_resume_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_resume_args remote_domain_resume_args;

struct remote_domain_shutdown_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_shutdown_args remote_domain_shutdown_args;

struct remote_domain_reboot_args {
	remote_nonnull_domain dom;
	int flags;
};
typedef struct remote_domain_reboot_args remote_domain_reboot_args;

struct remote_domain_destroy_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_destroy_args remote_domain_destroy_args;

struct remote_domain_get_os_type_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_get_os_type_args remote_domain_get_os_type_args;

struct remote_domain_get_os_type_ret {
	remote_nonnull_string type;
};
typedef struct remote_domain_get_os_type_ret remote_domain_get_os_type_ret;

struct remote_domain_get_max_memory_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_get_max_memory_args remote_domain_get_max_memory_args;

struct remote_domain_get_max_memory_ret {
	u_quad_t memory;
};
typedef struct remote_domain_get_max_memory_ret remote_domain_get_max_memory_ret;

struct remote_domain_set_max_memory_args {
	remote_nonnull_domain dom;
	u_quad_t memory;
};
typedef struct remote_domain_set_max_memory_args remote_domain_set_max_memory_args;

struct remote_domain_set_memory_args {
	remote_nonnull_domain dom;
	u_quad_t memory;
};
typedef struct remote_domain_set_memory_args remote_domain_set_memory_args;

struct remote_domain_get_info_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_get_info_args remote_domain_get_info_args;

struct remote_domain_get_info_ret {
	u_char state;
	u_quad_t max_mem;
	u_quad_t memory;
	u_short nr_virt_cpu;
	u_quad_t cpu_time;
};
typedef struct remote_domain_get_info_ret remote_domain_get_info_ret;

struct remote_domain_save_args {
	remote_nonnull_domain dom;
	remote_nonnull_string to;
};
typedef struct remote_domain_save_args remote_domain_save_args;

struct remote_domain_restore_args {
	remote_nonnull_string from;
};
typedef struct remote_domain_restore_args remote_domain_restore_args;

struct remote_domain_core_dump_args {
	remote_nonnull_domain dom;
	remote_nonnull_string to;
	int flags;
};
typedef struct remote_domain_core_dump_args remote_domain_core_dump_args;

struct remote_domain_dump_xml_args {
	remote_nonnull_domain dom;
	int flags;
};
typedef struct remote_domain_dump_xml_args remote_domain_dump_xml_args;

struct remote_domain_dump_xml_ret {
	remote_nonnull_string xml;
};
typedef struct remote_domain_dump_xml_ret remote_domain_dump_xml_ret;

struct remote_list_defined_domains_args {
	int maxnames;
};
typedef struct remote_list_defined_domains_args remote_list_defined_domains_args;

struct remote_list_defined_domains_ret {
	struct {
		u_int names_len;
		remote_nonnull_string *names_val;
	} names;
};
typedef struct remote_list_defined_domains_ret remote_list_defined_domains_ret;

struct remote_num_of_defined_domains_ret {
	int num;
};
typedef struct remote_num_of_defined_domains_ret remote_num_of_defined_domains_ret;

struct remote_domain_create_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_create_args remote_domain_create_args;

struct remote_domain_define_xml_args {
	remote_nonnull_string xml;
};
typedef struct remote_domain_define_xml_args remote_domain_define_xml_args;

struct remote_domain_define_xml_ret {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_define_xml_ret remote_domain_define_xml_ret;

struct remote_domain_undefine_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_undefine_args remote_domain_undefine_args;

struct remote_domain_set_vcpus_args {
	remote_nonnull_domain dom;
	int nvcpus;
};
typedef struct remote_domain_set_vcpus_args remote_domain_set_vcpus_args;

struct remote_domain_pin_vcpu_args {
	remote_nonnull_domain dom;
	int vcpu;
	struct {
		u_int cpumap_len;
		char *cpumap_val;
	} cpumap;
};
typedef struct remote_domain_pin_vcpu_args remote_domain_pin_vcpu_args;

struct remote_domain_get_vcpus_args {
	remote_nonnull_domain dom;
	int maxinfo;
	int maplen;
};
typedef struct remote_domain_get_vcpus_args remote_domain_get_vcpus_args;

struct remote_domain_get_vcpus_ret {
	struct {
		u_int info_len;
		remote_vcpu_info *info_val;
	} info;
	struct {
		u_int cpumaps_len;
		char *cpumaps_val;
	} cpumaps;
};
typedef struct remote_domain_get_vcpus_ret remote_domain_get_vcpus_ret;

struct remote_domain_get_max_vcpus_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_get_max_vcpus_args remote_domain_get_max_vcpus_args;

struct remote_domain_get_max_vcpus_ret {
	int num;
};
typedef struct remote_domain_get_max_vcpus_ret remote_domain_get_max_vcpus_ret;

struct remote_domain_attach_device_args {
	remote_nonnull_domain dom;
	remote_nonnull_string xml;
};
typedef struct remote_domain_attach_device_args remote_domain_attach_device_args;

struct remote_domain_detach_device_args {
	remote_nonnull_domain dom;
	remote_nonnull_string xml;
};
typedef struct remote_domain_detach_device_args remote_domain_detach_device_args;

struct remote_domain_get_autostart_args {
	remote_nonnull_domain dom;
};
typedef struct remote_domain_get_autostart_args remote_domain_get_autostart_args;

struct remote_domain_get_autostart_ret {
	int autostart;
};
typedef struct remote_domain_get_autostart_ret remote_domain_get_autostart_ret;

struct remote_domain_set_autostart_args {
	remote_nonnull_domain dom;
	int autostart;
};
typedef struct remote_domain_set_autostart_args remote_domain_set_autostart_args;

struct remote_num_of_networks_ret {
	int num;
};
typedef struct remote_num_of_networks_ret remote_num_of_networks_ret;

struct remote_list_networks_args {
	int maxnames;
};
typedef struct remote_list_networks_args remote_list_networks_args;

struct remote_list_networks_ret {
	struct {
		u_int names_len;
		remote_nonnull_string *names_val;
	} names;
};
typedef struct remote_list_networks_ret remote_list_networks_ret;

struct remote_num_of_defined_networks_ret {
	int num;
};
typedef struct remote_num_of_defined_networks_ret remote_num_of_defined_networks_ret;

struct remote_list_defined_networks_args {
	int maxnames;
};
typedef struct remote_list_defined_networks_args remote_list_defined_networks_args;

struct remote_list_defined_networks_ret {
	struct {
		u_int names_len;
		remote_nonnull_string *names_val;
	} names;
};
typedef struct remote_list_defined_networks_ret remote_list_defined_networks_ret;

struct remote_network_lookup_by_uuid_args {
	remote_uuid uuid;
};
typedef struct remote_network_lookup_by_uuid_args remote_network_lookup_by_uuid_args;

struct remote_network_lookup_by_uuid_ret {
	remote_nonnull_network net;
};
typedef struct remote_network_lookup_by_uuid_ret remote_network_lookup_by_uuid_ret;

struct remote_network_lookup_by_name_args {
	remote_nonnull_string name;
};
typedef struct remote_network_lookup_by_name_args remote_network_lookup_by_name_args;

struct remote_network_lookup_by_name_ret {
	remote_nonnull_network net;
};
typedef struct remote_network_lookup_by_name_ret remote_network_lookup_by_name_ret;

struct remote_network_create_xml_args {
	remote_nonnull_string xml;
};
typedef struct remote_network_create_xml_args remote_network_create_xml_args;

struct remote_network_create_xml_ret {
	remote_nonnull_network net;
};
typedef struct remote_network_create_xml_ret remote_network_create_xml_ret;

struct remote_network_define_xml_args {
	remote_nonnull_string xml;
};
typedef struct remote_network_define_xml_args remote_network_define_xml_args;

struct remote_network_define_xml_ret {
	remote_nonnull_network net;
};
typedef struct remote_network_define_xml_ret remote_network_define_xml_ret;

struct remote_network_undefine_args {
	remote_nonnull_network net;
};
typedef struct remote_network_undefine_args remote_network_undefine_args;

struct remote_network_create_args {
	remote_nonnull_network net;
};
typedef struct remote_network_create_args remote_network_create_args;

struct remote_network_destroy_args {
	remote_nonnull_network net;
};
typedef struct remote_network_destroy_args remote_network_destroy_args;

struct remote_network_dump_xml_args {
	remote_nonnull_network net;
	int flags;
};
typedef struct remote_network_dump_xml_args remote_network_dump_xml_args;

struct remote_network_dump_xml_ret {
	remote_nonnull_string xml;
};
typedef struct remote_network_dump_xml_ret remote_network_dump_xml_ret;

struct remote_network_get_bridge_name_args {
	remote_nonnull_network net;
};
typedef struct remote_network_get_bridge_name_args remote_network_get_bridge_name_args;

struct remote_network_get_bridge_name_ret {
	remote_nonnull_string name;
};
typedef struct remote_network_get_bridge_name_ret remote_network_get_bridge_name_ret;

struct remote_network_get_autostart_args {
	remote_nonnull_network net;
};
typedef struct remote_network_get_autostart_args remote_network_get_autostart_args;

struct remote_network_get_autostart_ret {
	int autostart;
};
typedef struct remote_network_get_autostart_ret remote_network_get_autostart_ret;

struct remote_network_set_autostart_args {
	remote_nonnull_network net;
	int autostart;
};
typedef struct remote_network_set_autostart_args remote_network_set_autostart_args;
#define REMOTE_PROGRAM 0x20008086
#define REMOTE_PROTOCOL_VERSION 1

enum remote_procedure {
	REMOTE_PROC_OPEN = 1,
	REMOTE_PROC_CLOSE = 2,
	REMOTE_PROC_GET_TYPE = 3,
	REMOTE_PROC_GET_VERSION = 4,
	REMOTE_PROC_GET_MAX_VCPUS = 5,
	REMOTE_PROC_NODE_GET_INFO = 6,
	REMOTE_PROC_GET_CAPABILITIES = 7,
	REMOTE_PROC_DOMAIN_ATTACH_DEVICE = 8,
	REMOTE_PROC_DOMAIN_CREATE = 9,
	REMOTE_PROC_DOMAIN_CREATE_LINUX = 10,
	REMOTE_PROC_DOMAIN_DEFINE_XML = 11,
	REMOTE_PROC_DOMAIN_DESTROY = 12,
	REMOTE_PROC_DOMAIN_DETACH_DEVICE = 13,
	REMOTE_PROC_DOMAIN_DUMP_XML = 14,
	REMOTE_PROC_DOMAIN_GET_AUTOSTART = 15,
	REMOTE_PROC_DOMAIN_GET_INFO = 16,
	REMOTE_PROC_DOMAIN_GET_MAX_MEMORY = 17,
	REMOTE_PROC_DOMAIN_GET_MAX_VCPUS = 18,
	REMOTE_PROC_DOMAIN_GET_OS_TYPE = 19,
	REMOTE_PROC_DOMAIN_GET_VCPUS = 20,
	REMOTE_PROC_LIST_DEFINED_DOMAINS = 21,
	REMOTE_PROC_DOMAIN_LOOKUP_BY_ID = 22,
	REMOTE_PROC_DOMAIN_LOOKUP_BY_NAME = 23,
	REMOTE_PROC_DOMAIN_LOOKUP_BY_UUID = 24,
	REMOTE_PROC_NUM_OF_DEFINED_DOMAINS = 25,
	REMOTE_PROC_DOMAIN_PIN_VCPU = 26,
	REMOTE_PROC_DOMAIN_REBOOT = 27,
	REMOTE_PROC_DOMAIN_RESUME = 28,
	REMOTE_PROC_DOMAIN_SET_AUTOSTART = 29,
	REMOTE_PROC_DOMAIN_SET_MAX_MEMORY = 30,
	REMOTE_PROC_DOMAIN_SET_MEMORY = 31,
	REMOTE_PROC_DOMAIN_SET_VCPUS = 32,
	REMOTE_PROC_DOMAIN_SHUTDOWN = 33,
	REMOTE_PROC_DOMAIN_SUSPEND = 34,
	REMOTE_PROC_DOMAIN_UNDEFINE = 35,
	REMOTE_PROC_LIST_DEFINED_NETWORKS = 36,
	REMOTE_PROC_LIST_DOMAINS = 37,
	REMOTE_PROC_LIST_NETWORKS = 38,
	REMOTE_PROC_NETWORK_CREATE = 39,
	REMOTE_PROC_NETWORK_CREATE_XML = 40,
	REMOTE_PROC_NETWORK_DEFINE_XML = 41,
	REMOTE_PROC_NETWORK_DESTROY = 42,
	REMOTE_PROC_NETWORK_DUMP_XML = 43,
	REMOTE_PROC_NETWORK_GET_AUTOSTART = 44,
	REMOTE_PROC_NETWORK_GET_BRIDGE_NAME = 45,
	REMOTE_PROC_NETWORK_LOOKUP_BY_NAME = 46,
	REMOTE_PROC_NETWORK_LOOKUP_BY_UUID = 47,
	REMOTE_PROC_NETWORK_SET_AUTOSTART = 48,
	REMOTE_PROC_NETWORK_UNDEFINE = 49,
	REMOTE_PROC_NUM_OF_DEFINED_NETWORKS = 50,
	REMOTE_PROC_NUM_OF_DOMAINS = 51,
	REMOTE_PROC_NUM_OF_NETWORKS = 52,
	REMOTE_PROC_DOMAIN_CORE_DUMP = 53,
	REMOTE_PROC_DOMAIN_RESTORE = 54,
	REMOTE_PROC_DOMAIN_SAVE = 55,
};
typedef enum remote_procedure remote_procedure;

enum remote_message_direction {
	REMOTE_CALL = 0,
	REMOTE_REPLY = 1,
	REMOTE_MESSAGE = 2,
};
typedef enum remote_message_direction remote_message_direction;

enum remote_message_status {
	REMOTE_OK = 0,
	REMOTE_ERROR = 1,
};
typedef enum remote_message_status remote_message_status;

struct remote_message_header {
	u_int prog;
	u_int vers;
	remote_procedure proc;
	remote_message_direction direction;
	u_int serial;
	remote_message_status status;
};
typedef struct remote_message_header remote_message_header;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_remote_nonnull_string (XDR *, remote_nonnull_string*);
extern  bool_t xdr_remote_string (XDR *, remote_string*);
extern  bool_t xdr_remote_uuid (XDR *, remote_uuid);
extern  bool_t xdr_remote_nonnull_domain (XDR *, remote_nonnull_domain*);
extern  bool_t xdr_remote_nonnull_network (XDR *, remote_nonnull_network*);
extern  bool_t xdr_remote_domain (XDR *, remote_domain*);
extern  bool_t xdr_remote_network (XDR *, remote_network*);
extern  bool_t xdr_remote_error (XDR *, remote_error*);
extern  bool_t xdr_remote_vcpu_info (XDR *, remote_vcpu_info*);
extern  bool_t xdr_remote_open_args (XDR *, remote_open_args*);
extern  bool_t xdr_remote_get_type_ret (XDR *, remote_get_type_ret*);
extern  bool_t xdr_remote_get_version_ret (XDR *, remote_get_version_ret*);
extern  bool_t xdr_remote_get_max_vcpus_args (XDR *, remote_get_max_vcpus_args*);
extern  bool_t xdr_remote_get_max_vcpus_ret (XDR *, remote_get_max_vcpus_ret*);
extern  bool_t xdr_remote_node_get_info_ret (XDR *, remote_node_get_info_ret*);
extern  bool_t xdr_remote_get_capabilities_ret (XDR *, remote_get_capabilities_ret*);
extern  bool_t xdr_remote_list_domains_args (XDR *, remote_list_domains_args*);
extern  bool_t xdr_remote_list_domains_ret (XDR *, remote_list_domains_ret*);
extern  bool_t xdr_remote_num_of_domains_ret (XDR *, remote_num_of_domains_ret*);
extern  bool_t xdr_remote_domain_create_linux_args (XDR *, remote_domain_create_linux_args*);
extern  bool_t xdr_remote_domain_create_linux_ret (XDR *, remote_domain_create_linux_ret*);
extern  bool_t xdr_remote_domain_lookup_by_id_args (XDR *, remote_domain_lookup_by_id_args*);
extern  bool_t xdr_remote_domain_lookup_by_id_ret (XDR *, remote_domain_lookup_by_id_ret*);
extern  bool_t xdr_remote_domain_lookup_by_uuid_args (XDR *, remote_domain_lookup_by_uuid_args*);
extern  bool_t xdr_remote_domain_lookup_by_uuid_ret (XDR *, remote_domain_lookup_by_uuid_ret*);
extern  bool_t xdr_remote_domain_lookup_by_name_args (XDR *, remote_domain_lookup_by_name_args*);
extern  bool_t xdr_remote_domain_lookup_by_name_ret (XDR *, remote_domain_lookup_by_name_ret*);
extern  bool_t xdr_remote_domain_suspend_args (XDR *, remote_domain_suspend_args*);
extern  bool_t xdr_remote_domain_resume_args (XDR *, remote_domain_resume_args*);
extern  bool_t xdr_remote_domain_shutdown_args (XDR *, remote_domain_shutdown_args*);
extern  bool_t xdr_remote_domain_reboot_args (XDR *, remote_domain_reboot_args*);
extern  bool_t xdr_remote_domain_destroy_args (XDR *, remote_domain_destroy_args*);
extern  bool_t xdr_remote_domain_get_os_type_args (XDR *, remote_domain_get_os_type_args*);
extern  bool_t xdr_remote_domain_get_os_type_ret (XDR *, remote_domain_get_os_type_ret*);
extern  bool_t xdr_remote_domain_get_max_memory_args (XDR *, remote_domain_get_max_memory_args*);
extern  bool_t xdr_remote_domain_get_max_memory_ret (XDR *, remote_domain_get_max_memory_ret*);
extern  bool_t xdr_remote_domain_set_max_memory_args (XDR *, remote_domain_set_max_memory_args*);
extern  bool_t xdr_remote_domain_set_memory_args (XDR *, remote_domain_set_memory_args*);
extern  bool_t xdr_remote_domain_get_info_args (XDR *, remote_domain_get_info_args*);
extern  bool_t xdr_remote_domain_get_info_ret (XDR *, remote_domain_get_info_ret*);
extern  bool_t xdr_remote_domain_save_args (XDR *, remote_domain_save_args*);
extern  bool_t xdr_remote_domain_restore_args (XDR *, remote_domain_restore_args*);
extern  bool_t xdr_remote_domain_core_dump_args (XDR *, remote_domain_core_dump_args*);
extern  bool_t xdr_remote_domain_dump_xml_args (XDR *, remote_domain_dump_xml_args*);
extern  bool_t xdr_remote_domain_dump_xml_ret (XDR *, remote_domain_dump_xml_ret*);
extern  bool_t xdr_remote_list_defined_domains_args (XDR *, remote_list_defined_domains_args*);
extern  bool_t xdr_remote_list_defined_domains_ret (XDR *, remote_list_defined_domains_ret*);
extern  bool_t xdr_remote_num_of_defined_domains_ret (XDR *, remote_num_of_defined_domains_ret*);
extern  bool_t xdr_remote_domain_create_args (XDR *, remote_domain_create_args*);
extern  bool_t xdr_remote_domain_define_xml_args (XDR *, remote_domain_define_xml_args*);
extern  bool_t xdr_remote_domain_define_xml_ret (XDR *, remote_domain_define_xml_ret*);
extern  bool_t xdr_remote_domain_undefine_args (XDR *, remote_domain_undefine_args*);
extern  bool_t xdr_remote_domain_set_vcpus_args (XDR *, remote_domain_set_vcpus_args*);
extern  bool_t xdr_remote_domain_pin_vcpu_args (XDR *, remote_domain_pin_vcpu_args*);
extern  bool_t xdr_remote_domain_get_vcpus_args (XDR *, remote_domain_get_vcpus_args*);
extern  bool_t xdr_remote_domain_get_vcpus_ret (XDR *, remote_domain_get_vcpus_ret*);
extern  bool_t xdr_remote_domain_get_max_vcpus_args (XDR *, remote_domain_get_max_vcpus_args*);
extern  bool_t xdr_remote_domain_get_max_vcpus_ret (XDR *, remote_domain_get_max_vcpus_ret*);
extern  bool_t xdr_remote_domain_attach_device_args (XDR *, remote_domain_attach_device_args*);
extern  bool_t xdr_remote_domain_detach_device_args (XDR *, remote_domain_detach_device_args*);
extern  bool_t xdr_remote_domain_get_autostart_args (XDR *, remote_domain_get_autostart_args*);
extern  bool_t xdr_remote_domain_get_autostart_ret (XDR *, remote_domain_get_autostart_ret*);
extern  bool_t xdr_remote_domain_set_autostart_args (XDR *, remote_domain_set_autostart_args*);
extern  bool_t xdr_remote_num_of_networks_ret (XDR *, remote_num_of_networks_ret*);
extern  bool_t xdr_remote_list_networks_args (XDR *, remote_list_networks_args*);
extern  bool_t xdr_remote_list_networks_ret (XDR *, remote_list_networks_ret*);
extern  bool_t xdr_remote_num_of_defined_networks_ret (XDR *, remote_num_of_defined_networks_ret*);
extern  bool_t xdr_remote_list_defined_networks_args (XDR *, remote_list_defined_networks_args*);
extern  bool_t xdr_remote_list_defined_networks_ret (XDR *, remote_list_defined_networks_ret*);
extern  bool_t xdr_remote_network_lookup_by_uuid_args (XDR *, remote_network_lookup_by_uuid_args*);
extern  bool_t xdr_remote_network_lookup_by_uuid_ret (XDR *, remote_network_lookup_by_uuid_ret*);
extern  bool_t xdr_remote_network_lookup_by_name_args (XDR *, remote_network_lookup_by_name_args*);
extern  bool_t xdr_remote_network_lookup_by_name_ret (XDR *, remote_network_lookup_by_name_ret*);
extern  bool_t xdr_remote_network_create_xml_args (XDR *, remote_network_create_xml_args*);
extern  bool_t xdr_remote_network_create_xml_ret (XDR *, remote_network_create_xml_ret*);
extern  bool_t xdr_remote_network_define_xml_args (XDR *, remote_network_define_xml_args*);
extern  bool_t xdr_remote_network_define_xml_ret (XDR *, remote_network_define_xml_ret*);
extern  bool_t xdr_remote_network_undefine_args (XDR *, remote_network_undefine_args*);
extern  bool_t xdr_remote_network_create_args (XDR *, remote_network_create_args*);
extern  bool_t xdr_remote_network_destroy_args (XDR *, remote_network_destroy_args*);
extern  bool_t xdr_remote_network_dump_xml_args (XDR *, remote_network_dump_xml_args*);
extern  bool_t xdr_remote_network_dump_xml_ret (XDR *, remote_network_dump_xml_ret*);
extern  bool_t xdr_remote_network_get_bridge_name_args (XDR *, remote_network_get_bridge_name_args*);
extern  bool_t xdr_remote_network_get_bridge_name_ret (XDR *, remote_network_get_bridge_name_ret*);
extern  bool_t xdr_remote_network_get_autostart_args (XDR *, remote_network_get_autostart_args*);
extern  bool_t xdr_remote_network_get_autostart_ret (XDR *, remote_network_get_autostart_ret*);
extern  bool_t xdr_remote_network_set_autostart_args (XDR *, remote_network_set_autostart_args*);
extern  bool_t xdr_remote_procedure (XDR *, remote_procedure*);
extern  bool_t xdr_remote_message_direction (XDR *, remote_message_direction*);
extern  bool_t xdr_remote_message_status (XDR *, remote_message_status*);
extern  bool_t xdr_remote_message_header (XDR *, remote_message_header*);

#else /* K&R C */
extern bool_t xdr_remote_nonnull_string ();
extern bool_t xdr_remote_string ();
extern bool_t xdr_remote_uuid ();
extern bool_t xdr_remote_nonnull_domain ();
extern bool_t xdr_remote_nonnull_network ();
extern bool_t xdr_remote_domain ();
extern bool_t xdr_remote_network ();
extern bool_t xdr_remote_error ();
extern bool_t xdr_remote_vcpu_info ();
extern bool_t xdr_remote_open_args ();
extern bool_t xdr_remote_get_type_ret ();
extern bool_t xdr_remote_get_version_ret ();
extern bool_t xdr_remote_get_max_vcpus_args ();
extern bool_t xdr_remote_get_max_vcpus_ret ();
extern bool_t xdr_remote_node_get_info_ret ();
extern bool_t xdr_remote_get_capabilities_ret ();
extern bool_t xdr_remote_list_domains_args ();
extern bool_t xdr_remote_list_domains_ret ();
extern bool_t xdr_remote_num_of_domains_ret ();
extern bool_t xdr_remote_domain_create_linux_args ();
extern bool_t xdr_remote_domain_create_linux_ret ();
extern bool_t xdr_remote_domain_lookup_by_id_args ();
extern bool_t xdr_remote_domain_lookup_by_id_ret ();
extern bool_t xdr_remote_domain_lookup_by_uuid_args ();
extern bool_t xdr_remote_domain_lookup_by_uuid_ret ();
extern bool_t xdr_remote_domain_lookup_by_name_args ();
extern bool_t xdr_remote_domain_lookup_by_name_ret ();
extern bool_t xdr_remote_domain_suspend_args ();
extern bool_t xdr_remote_domain_resume_args ();
extern bool_t xdr_remote_domain_shutdown_args ();
extern bool_t xdr_remote_domain_reboot_args ();
extern bool_t xdr_remote_domain_destroy_args ();
extern bool_t xdr_remote_domain_get_os_type_args ();
extern bool_t xdr_remote_domain_get_os_type_ret ();
extern bool_t xdr_remote_domain_get_max_memory_args ();
extern bool_t xdr_remote_domain_get_max_memory_ret ();
extern bool_t xdr_remote_domain_set_max_memory_args ();
extern bool_t xdr_remote_domain_set_memory_args ();
extern bool_t xdr_remote_domain_get_info_args ();
extern bool_t xdr_remote_domain_get_info_ret ();
extern bool_t xdr_remote_domain_save_args ();
extern bool_t xdr_remote_domain_restore_args ();
extern bool_t xdr_remote_domain_core_dump_args ();
extern bool_t xdr_remote_domain_dump_xml_args ();
extern bool_t xdr_remote_domain_dump_xml_ret ();
extern bool_t xdr_remote_list_defined_domains_args ();
extern bool_t xdr_remote_list_defined_domains_ret ();
extern bool_t xdr_remote_num_of_defined_domains_ret ();
extern bool_t xdr_remote_domain_create_args ();
extern bool_t xdr_remote_domain_define_xml_args ();
extern bool_t xdr_remote_domain_define_xml_ret ();
extern bool_t xdr_remote_domain_undefine_args ();
extern bool_t xdr_remote_domain_set_vcpus_args ();
extern bool_t xdr_remote_domain_pin_vcpu_args ();
extern bool_t xdr_remote_domain_get_vcpus_args ();
extern bool_t xdr_remote_domain_get_vcpus_ret ();
extern bool_t xdr_remote_domain_get_max_vcpus_args ();
extern bool_t xdr_remote_domain_get_max_vcpus_ret ();
extern bool_t xdr_remote_domain_attach_device_args ();
extern bool_t xdr_remote_domain_detach_device_args ();
extern bool_t xdr_remote_domain_get_autostart_args ();
extern bool_t xdr_remote_domain_get_autostart_ret ();
extern bool_t xdr_remote_domain_set_autostart_args ();
extern bool_t xdr_remote_num_of_networks_ret ();
extern bool_t xdr_remote_list_networks_args ();
extern bool_t xdr_remote_list_networks_ret ();
extern bool_t xdr_remote_num_of_defined_networks_ret ();
extern bool_t xdr_remote_list_defined_networks_args ();
extern bool_t xdr_remote_list_defined_networks_ret ();
extern bool_t xdr_remote_network_lookup_by_uuid_args ();
extern bool_t xdr_remote_network_lookup_by_uuid_ret ();
extern bool_t xdr_remote_network_lookup_by_name_args ();
extern bool_t xdr_remote_network_lookup_by_name_ret ();
extern bool_t xdr_remote_network_create_xml_args ();
extern bool_t xdr_remote_network_create_xml_ret ();
extern bool_t xdr_remote_network_define_xml_args ();
extern bool_t xdr_remote_network_define_xml_ret ();
extern bool_t xdr_remote_network_undefine_args ();
extern bool_t xdr_remote_network_create_args ();
extern bool_t xdr_remote_network_destroy_args ();
extern bool_t xdr_remote_network_dump_xml_args ();
extern bool_t xdr_remote_network_dump_xml_ret ();
extern bool_t xdr_remote_network_get_bridge_name_args ();
extern bool_t xdr_remote_network_get_bridge_name_ret ();
extern bool_t xdr_remote_network_get_autostart_args ();
extern bool_t xdr_remote_network_get_autostart_ret ();
extern bool_t xdr_remote_network_set_autostart_args ();
extern bool_t xdr_remote_procedure ();
extern bool_t xdr_remote_message_direction ();
extern bool_t xdr_remote_message_status ();
extern bool_t xdr_remote_message_header ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_REMOTE_PROTOCOL_H_RPCGEN */
