extern unsigned int g_417ac4;
extern unsigned int g_417aee;
extern unsigned int g_417d40;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_417ac4, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_417aee, 0x5));
    dcgettext(0x0, &g_417d40, 0x5);
}
