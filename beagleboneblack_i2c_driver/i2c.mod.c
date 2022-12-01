#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc4162456, "module_layout" },
	{ 0x57630285, "no_llseek" },
	{ 0xcb22b219, "bus_unregister_notifier" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x12391dd6, "i2c_for_each_dev" },
	{ 0xdb8c13c, "class_destroy" },
	{ 0x3026fb7a, "bus_register_notifier" },
	{ 0xd56e879e, "i2c_bus_type" },
	{ 0xe72972aa, "__class_create" },
	{ 0xfd059f5d, "__register_chrdev" },
	{ 0xbbb30e8e, "device_remove_file" },
	{ 0x92997ed8, "_printk" },
	{ 0x7ebe1016, "device_destroy" },
	{ 0x6754abe7, "device_create_file" },
	{ 0x3b1038f3, "device_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa926a2db, "kmem_cache_alloc_trace" },
	{ 0x57b41c5c, "kmalloc_caches" },
	{ 0x192ce48b, "i2c_get_adapter" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x73a4fca5, "pv_ops" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x906bb2f1, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xce52a2da, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x97f4a8b5, "__dynamic_dev_dbg" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x478c71cf, "i2c_smbus_xfer" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcc8043ce, "i2c_verify_client" },
	{ 0xde658104, "device_for_each_child" },
	{ 0xb50dc0d3, "i2c_adapter_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0xa3ae35bf, "i2c_put_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3D4F8744CD66756BE1E741");
