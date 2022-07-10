extern unsigned int g_406aa2;
extern unsigned int g_406acc;
extern unsigned int g_406d20;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_406aa2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_406acc, 0x5));
    dcgettext(0x0, &g_406d20, 0x5);
}
