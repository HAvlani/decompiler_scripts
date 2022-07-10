extern unsigned int g_408012;
extern unsigned int g_40803c;
extern unsigned int g_408290;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_408012, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40803c, 0x5));
    dcgettext(0x0, &g_408290, 0x5);
}
