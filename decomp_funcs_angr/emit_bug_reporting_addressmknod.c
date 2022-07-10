extern unsigned int g_4080a2;
extern unsigned int g_4080cc;
extern unsigned int g_408320;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_4080a2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_4080cc, 0x5));
    dcgettext(0x0, &g_408320, 0x5);
}
