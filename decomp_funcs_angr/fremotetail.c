typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40d420;

int fremote()
{
    unsigned long v0;  // [bp-0xa8]
    unsigned long long v3;  // rax
    struct_0 *v4;  // rbx
    unsigned long long v5;  // r12
    unsigned long long v6;  // r13

    if (fstatfs() != 0)
    {
        v5 = 1;
        v4 = __errno_location();
        if (v4->field_0 == 38)
        {
            v3 = v5;
            return v3;
        }
        v6 = (long long)quotearg_style();
        error(0x0, v4->field_0, dcgettext(0x0, &g_40d420, 0x5));
        v3 = v5;
        return v3;
    }
    else if (!(v0 != 732765674))
    {
        v5 = 0;
        v3 = v5;
        return v3;
    }
    else if (((char)(v0 <= 732765674)))
    {
        if (v0 <= 40866)
        {
            if (!(v0 <= 40863))
            {
                v5 = 0;
                v3 = v5;
                return v3;
            }
            else if (v0 <= 16390)
            {
                if (!(v0 <= 16383))
                {
                    v3 = v5;
                    return v3;
                }
                else if (v0 <= 5007)
                {
                    if (!(v0 <= 4978))
                    {
                        v3 = v5;
                        return v3;
                    }
                    else if (!(v0 != 391))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 391))))
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v3 = v5;
                        return v3;
                    }
                }
                else
                {
                    if (!(v0 != 9336))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 9336))))
                    {
                        v3 = v5;
                        return v3;
                    }
                    else if (v0 != 7377)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
            }
            else
            {
                if (!(v0 != 19802))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 19802))))
                {
                    if (!(v0 != 29366))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 29366))))
                    {
                        v3 = v5;
                        return v3;
                    }
                    else if (v0 != 24053)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
                else
                {
                    if (!(v0 != 18520))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 18520))))
                    {
                        v3 = v5;
                        return v3;
                    }
                    else if (v0 != 16964)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
            }
        }
        if (v0 <= 19920823)
        {
            if (!(v0 <= 19920819))
            {
                v5 = 0;
                v3 = v5;
                return v3;
            }
            else if (!(v0 != 2613483))
            {
                v5 = 0;
                v3 = v5;
                return v3;
            }
            else if (!(((char)(v0 <= 2613483))))
            {
                if (!(v0 != 16914836))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 16914836))))
                {
                    if (v0 != 16914839)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
                else
                {
                    if (v0 != 4278867)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
            }
            else
            {
                if (!(v0 != 61267))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 61267))))
                {
                    if (v0 != 61791)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
                else
                {
                    if (!(v0 != 44543))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (v0 != 61265)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
            }
        }
        else
        {
            if (!(v0 != 352400198))
            {
                v5 = 0;
                v3 = v5;
                return v3;
            }
            else if (!(((char)(v0 <= 352400198))))
            {
                if (!(v0 != 538032816))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 538032816))))
                {
                    if (v0 != 604313861)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
                else
                {
                    if (v0 != 427819522)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
            }
            else
            {
                if (!(v0 != 195894762))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 195894762))))
                {
                    if (v0 != 288389204)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
                else
                {
                    if (v0 != 124082209)
                    {
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                }
            }
        }
    }
    else
    {
        if (!(v0 != 1650812272))
        {
            v5 = 0;
            v3 = v5;
            return v3;
        }
        else if (!(((char)(v0 <= 1650812272))))
        {
            if (!(v0 != 2240043254))
            {
                v5 = 0;
                v3 = v5;
                return v3;
            }
            else if (!(((char)(v0 <= 2240043254))))
            {
                if (!(v0 != 3405662737))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 3405662737))))
                {
                    if (!(v0 != -218816496))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= -218816496))))
                    {
                        if (v0 != -109248628)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (v0 != 3730735588)
                        {
                            v3 = v5;
                            return v3;
                        }
                    }
                }
                else
                {
                    if (!(v0 != 2881100148))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 2881100148))))
                    {
                        if (v0 != 3344373136)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (v0 != 2435016766)
                        {
                            v3 = v5;
                            return v3;
                        }
                    }
                }
            }
            else
            {
                if (!(v0 != 1819242352))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 1819242352))))
                {
                    if (!(v0 != 1936814952))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 1936814952))))
                    {
                        if (v0 != 1936880249)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (v0 != 1853056627)
                        {
                            v3 = v5;
                            return v3;
                        }
                    }
                }
                else
                {
                    if (!(v0 != 1684300152))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 1684300152))))
                    {
                        if (v0 != 1733912937)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (!(v0 != 1667723888))
                        {
                            v5 = 0;
                            v3 = v5;
                            return v3;
                        }
                        else if (v0 != 1684170528)
                        {
                            v3 = v5;
                            return v3;
                        }
                        else
                        {
                            v5 = 0;
                            v3 = v5;
                            return v3;
                        }
                    }
                }
            }
        }
        else
        {
            if (!(v0 != 1397114950))
            {
                v5 = 0;
                v3 = v5;
                return v3;
            }
            else if (!(((char)(v0 <= 1397114950))))
            {
                if (!(v0 != 1481003842))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 1481003842))))
                {
                    if (!(v0 != 1573531125))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 1573531125))))
                    {
                        if (v0 != 1634035564)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (v0 != 1513908720)
                        {
                            v3 = v5;
                            return v3;
                        }
                    }
                }
                else
                {
                    if (!(v0 != 0x54190100))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 0x54190100))))
                    {
                        if (v0 != 1448756819)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (v0 != 1397118030)
                        {
                            v3 = v5;
                            return v3;
                        }
                    }
                }
            }
            else
            {
                if (!(v0 != 1161678120))
                {
                    v5 = 0;
                    v3 = v5;
                    return v3;
                }
                else if (!(((char)(v0 <= 1161678120))))
                {
                    if (!(v0 != 1382369651))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 1382369651))))
                    {
                        if (v0 != 1397048141)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (v0 != 1162691661)
                        {
                            v3 = v5;
                            return v3;
                        }
                    }
                }
                else
                {
                    if (!(v0 != 1112100429))
                    {
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else if (!(((char)(v0 <= 1112100429))))
                    {
                        if (v0 != 1128357203)
                        {
                            v3 = v5;
                            return v3;
                        }
                        v5 = 0;
                        v3 = v5;
                        return v3;
                    }
                    else
                    {
                        if (!(v0 != 827541066))
                        {
                            v5 = 0;
                            v3 = v5;
                            return v3;
                        }
                        else if (v0 != 1111905073)
                        {
                            v3 = v5;
                            return v3;
                        }
                        else
                        {
                            v5 = 0;
                            v3 = v5;
                            return v3;
                        }
                    }
                }
            }
        }
    }
}
