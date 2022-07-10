extern unsigned int g_407fe2;
extern unsigned int g_40800c;
extern unsigned int g_408260;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407fe2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40800c, 0x5));
    dcgettext(0x0, &g_408260, 0x5);
}
