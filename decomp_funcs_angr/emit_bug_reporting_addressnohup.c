extern unsigned int g_407e22;
extern unsigned int g_407e4c;
extern unsigned int g_4080a0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407e22, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_407e4c, 0x5));
    dcgettext(0x0, &g_4080a0, 0x5);
}
