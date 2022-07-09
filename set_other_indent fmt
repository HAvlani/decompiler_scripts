extern char crown;
extern struct_0 first_indent;
extern struct_0 in_column;
extern struct_0 other_indent;
extern char split;
extern char tagged;

int set_other_indent()
{
    char v1;  // dil
    char v2;  // dil

    if (split != 0)
    {
        other_indent = first_indent;
        return ((long long)first_indent);
    }
    else if (crown != 0)
    {
        other_indent = (((long long)v2) == 0? first_indent : *(0x41710c));
        return ((long long)(((long long)v2) == 0? first_indent : *(0x41710c)));
    }
    else if (!(tagged != 0))
    {
        other_indent = ((int)first_indent);
        return ((long long)first_indent);
    }
    else if (((long long)v1) != 0)
    {
        if (in_column != ((int)first_indent))
        {
            other_indent = in_column;
            return ((long long)first_indent);
        }
        else if (((int)first_indent) != other_indent)
        {
            return ((long long)first_indent);
        }
        else
        {
            other_indent = 0 - ((int)(first_indent < 1)) & 3;
            return ((long long)(0 - ((int)(first_indent < 1)) & 3));
        }
        other_indent = 0 - ((int)(first_indent < 1)) & 3;
        return ((long long)(0 - ((int)(first_indent < 1)) & 3));
    }
    else
    {
        if (((int)first_indent) != other_indent)
        {
            return ((long long)first_indent);
        }
    }
}
