typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 first_free_tab;
extern struct_0 max_column_width;
extern struct_0 n_tabs_allocated;
extern struct_0 tab_list;

int add_tab_stop()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 * v3;  // rdx
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v7;  // rdi

    v4 = v7;
    v3 = first_free_tab;
    v2 = tab_list;
    if (!(first_free_tab != 0))
    {
        v5 = v4;
    }
    else if (!(*(tab_list + (first_free_tab << 3) + 8) > &stack_base+0))
    {
        v5 = &stack_base+0 - *(tab_list + first_free_tab * 8 + 8);
    }
    else if (first_free_tab != n_tabs_allocated)
    {
        *(tab_list + first_free_tab * 8) = &stack_base+0;
        first_free_tab = first_free_tab + 1;
        return n_tabs_allocated;
    }
    else
    {
        v5 = 0;
        /* goto 4206658; */
    }
    if (first_free_tab == n_tabs_allocated)
    {
        v2 = x2nrealloc();
        v3 = first_free_tab;
        tab_list = v2;
    }
    if (*(tab_list + (first_free_tab << 3) + 8) <= &stack_base+0 || first_free_tab == n_tabs_allocated || first_free_tab == 0)
    {
        *(v2 + v3 * 8) = v5;
        v1 = v3 + 1;
        first_free_tab = v3 + 1;
        if (max_column_width < v5)
        {
            max_column_width = v5;
            return v1;
        }
        return v1;
    }
}
