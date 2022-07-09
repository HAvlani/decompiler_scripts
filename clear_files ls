extern char any_has_acl;
extern unsigned int author_width;
extern unsigned int block_size_width;
extern unsigned long long cwd_n_used;
extern char cwd_some_quoted;
extern unsigned int file_size_width;
extern unsigned int group_width;
extern unsigned int inode_number_width;
extern unsigned int major_device_number_width;
extern unsigned int minor_device_number_width;
extern unsigned int nlink_width;
extern unsigned int owner_width;
extern unsigned int scontext_width;

int clear_files()
{
    unsigned long long v2;  // rax
    unsigned long long v4;  // rbx

    if (cwd_n_used != 0)
    {
        v4 = 0;
        while (true)
        {
            v4 += 1;
            rpl_free();
            rpl_free();
            v2 = rpl_free();
            if (cwd_n_used <= v4)
            {
                break;
            }
        }
        cwd_n_used = 0;
        cwd_some_quoted = 0;
        any_has_acl = 0;
        inode_number_width = 0;
        block_size_width = 0;
        nlink_width = 0;
        owner_width = 0;
        group_width = 0;
        author_width = 0;
        scontext_width = 0;
        major_device_number_width = 0;
        minor_device_number_width = 0;
        file_size_width = 0;
        return v2;
    }
    cwd_n_used = 0;
    cwd_some_quoted = 0;
    any_has_acl = 0;
    inode_number_width = 0;
    block_size_width = 0;
    nlink_width = 0;
    owner_width = 0;
    group_width = 0;
    author_width = 0;
    scontext_width = 0;
    major_device_number_width = 0;
    minor_device_number_width = 0;
    file_size_width = 0;
    return v2;
}
