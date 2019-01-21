#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x71028b7, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8ac8f766, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xaa1f0ce8, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x7b3f9ae, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x7524e6a1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x143f9de4, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x9f134b51, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x71a6f434, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x6ebf42d6, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb62d4df4, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x66935047, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x1525ff2, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x8691b70, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xcaf812c0, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x7908573b, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x6cf2e8d9, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xa7a452e0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd5795692, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xbb244f5e, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe43a4fa5, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x48c77aae, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x27fb465f, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xa1cf8bcb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x3f377ce5, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x9e8ce4b1, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x8bb3812b, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x4733581, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xcd2d7f62, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x675bd782, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdd1973b0, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x3262c2e5, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x794e7023, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65f8f90c, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x58fe758e, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xe2b14d67, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa9fe05ce, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2f713084, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xbb33f295, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xaa39a2ee, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xcab06e13, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xdbdd1ef, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xc76ea8db, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x44daa98b, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x995a817c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x2cc855a8, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6e424d46, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xdfb36822, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x9a6a211c, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xc35e3de7, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x5e611235, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x55f72ac2, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xc62b7afa, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xb46cfb30, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbf46b4a1, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0xe4afb5d3, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x11171958, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x7db3e29e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x33aefe5b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc3e482aa, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x9adb2f2e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1a890ab6, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xc591339d, __VMLINUX_SYMBOL_STR(__vfs_read) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb4dbb484, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6efcd04e, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x71313d53, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xeeb88daf, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x8d6cb938, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x3b9ae023, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x30097a16, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb3d9dbdc, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x9b737d6f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x88d2b587, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb7b33611, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xa0411fed, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xb918f4f8, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xd8cde2e9, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0xf2411806, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe3a975d4, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x24d66fdc, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1346c4c4, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x2de8f566, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9bd93757, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xcd5b4de8, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x46699372, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x166ae74b, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x26f1caa7, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0xdaddc2c5, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x7f7801e, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x515fd51, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0xe073d687, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x9fbc81, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xa4c218d7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x21f06f97, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xcff9f6b5, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x358231c0, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8cb63db5, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8663ad33, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x597492c5, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa85d7913, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb8f43d9c, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x815dd5b8, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x689c2bbe, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x1040d175, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x952309a6, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xd1b9562c, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x160a53e5, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x635ff908, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xac51d390, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x840d0d0e, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3a29e4e7, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x18812b34, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4b4725ea, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xac6dd980, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xb60977dd, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2ce5d6ab, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x2eeb0003, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb3844182, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x2e20ebc7, __VMLINUX_SYMBOL_STR(skb_pull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v024Cd8179*");

MODULE_INFO(srcversion, "E295FB3ED8F2C96EC9B8957");
