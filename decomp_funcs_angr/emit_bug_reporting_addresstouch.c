extern unsigned int g_414662;
extern unsigned int g_41468c;
extern unsigned int g_4148e0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_414662, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_41468c, 0x5));
    dcgettext(0x0, &g_4148e0, 0x5);
}
