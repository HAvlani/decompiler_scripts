extern struct_0 columns;
extern char explicit_columns;
extern unsigned int g_40d015;

int parse_column_count()
{
    dcgettext(0x0, &g_40d015, 0x5);
    explicit_columns = 1;
    columns = (int)xdectoimax();
    return ((long long)columns);
}
