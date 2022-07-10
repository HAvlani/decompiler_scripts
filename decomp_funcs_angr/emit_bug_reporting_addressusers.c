extern unsigned int g_407b02;
extern unsigned int g_407b2c;
extern unsigned int g_407d80;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407b02, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_407b2c, 0x5));
    dcgettext(0x0, &g_407d80, 0x5);
}
