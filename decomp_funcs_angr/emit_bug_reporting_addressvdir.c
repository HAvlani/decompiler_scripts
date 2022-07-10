extern unsigned int g_41bf82;
extern unsigned int g_41bfac;
extern unsigned int g_41c200;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_41bf82, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_41bfac, 0x5));
    dcgettext(0x0, &g_41c200, 0x5);
}
