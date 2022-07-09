
_Bool print_statfs(char *pformat,size_t prefix_len,char mod,char m,int fd,char *filename,void *data)

{
  long lVar1;
  uintmax_t arg;
  char *pcVar2;
  statfs *statfsbuf;
  
  switch(m) {
  case 'S':
    arg = statfsbuf->f_frsize;
    if (arg == 0) {
      arg = statfsbuf->f_bsize;
    }
    goto LAB_00103462;
  case 'T':
    lVar1 = statfsbuf->f_type;
    if (lVar1 == 0x42494e4d) {
      pcVar2 = "binfmt_misc";
    }
    else if (lVar1 < 0x42494e4e) {
      if (lVar1 == 0xef53) {
        pcVar2 = "ext2/ext3";
      }
      else if (lVar1 < 0xef54) {
        pcVar2 = "hfs+";
        if (lVar1 != 0x482b) {
          if (lVar1 < 0x482c) {
            pcVar2 = "devpts";
            if (lVar1 != 0x1cd1) {
              if (lVar1 < 0x1cd2) {
                pcVar2 = "devfs";
                if (lVar1 != 0x1373) {
                  if (lVar1 < 0x1374) {
                    pcVar2 = "autofs";
                    if (lVar1 != 0x187) {
                      if (lVar1 < 0x188) {
                        pcVar2 = "qnx4";
                        if (lVar1 != 0x2f) {
                          if (lVar1 != 0x33) goto LAB_0010418a;
                          pcVar2 = "z3fold";
                        }
                      }
                      else {
                        if (lVar1 != 0x7c0) goto LAB_0010418a;
                        pcVar2 = "jffs";
                      }
                    }
                  }
                  else {
                    pcVar2 = "minix";
                    if (lVar1 != 0x137f) {
                      if (lVar1 == 0x138f) {
                        pcVar2 = "minix (30 char.)";
                      }
                      else {
                        if (lVar1 != 0x137d) goto LAB_0010418a;
                        pcVar2 = "ext";
                      }
                    }
                  }
                }
              }
              else {
                pcVar2 = "isofs";
                if (lVar1 != 0x4000) {
                  if (lVar1 < 0x4001) {
                    pcVar2 = "minix v2 (30 char.)";
                    if (lVar1 != 0x2478) {
                      if (lVar1 == 0x3434) {
                        pcVar2 = "nilfs";
                      }
                      else {
                        if (lVar1 != 0x2468) goto LAB_0010418a;
                        pcVar2 = "minix v2";
                      }
                    }
                  }
                  else {
                    pcVar2 = "fat";
                    if (lVar1 != 0x4006) {
                      if (lVar1 == 0x4244) {
                        pcVar2 = "hfs";
                      }
                      else {
                        if (lVar1 != 0x4004) goto LAB_0010418a;
                        pcVar2 = "isofs";
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pcVar2 = "jffs2";
            if (lVar1 != 0x72b6) {
              if (lVar1 < 0x72b7) {
                pcVar2 = "novell";
                if (lVar1 != 0x564c) {
                  if (lVar1 < 0x564d) {
                    pcVar2 = "minix3";
                    if (lVar1 != 0x4d5a) {
                      if (lVar1 < 0x4d5b) {
                        pcVar2 = "hfsx";
                        if (lVar1 != 0x4858) {
                          if (lVar1 != 0x4d44) goto LAB_0010418a;
                          pcVar2 = "msdos";
                        }
                      }
                      else if (lVar1 == 0x517b) {
                        pcVar2 = "smb";
                      }
                      else {
LAB_0010418a:
                        __sprintf_chk(buf_7638,1,0x1d,"UNKNOWN (0x%lx)");
                        pcVar2 = buf_7638;
                      }
                    }
                  }
                  else {
                    pcVar2 = "nfs";
                    if (lVar1 != 0x6969) {
                      if (lVar1 == 0x7275) {
                        pcVar2 = "romfs";
                      }
                      else {
                        if (lVar1 != 0x5df5) goto LAB_0010418a;
                        pcVar2 = "exofs";
                      }
                    }
                  }
                }
              }
              else {
                pcVar2 = "usbdevfs";
                if (lVar1 != 0x9fa2) {
                  if (lVar1 < 0x9fa3) {
                    pcVar2 = "proc";
                    if (lVar1 != 0x9fa0) {
                      if (lVar1 == 0x9fa1) {
                        pcVar2 = "openprom";
                      }
                      else {
                        if (lVar1 != 0x9660) goto LAB_0010418a;
                        pcVar2 = "isofs";
                      }
                    }
                  }
                  else {
                    pcVar2 = "affs";
                    if (lVar1 != 0xadff) {
                      if (lVar1 == 0xef51) {
                        pcVar2 = "ext2";
                      }
                      else {
                        if (lVar1 != 0xadf5) goto LAB_0010418a;
                        pcVar2 = "adfs";
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pcVar2 = "anon-inode FS";
        if (lVar1 != 0x9041934) {
          if (lVar1 < 0x9041935) {
            pcVar2 = "gfs/gfs2";
            if (lVar1 != 0x1161970) {
              if (lVar1 < 0x1161971) {
                pcVar2 = "hostfs";
                if (lVar1 != 0xc0ffee) {
                  if (lVar1 < 0xc0ffef) {
                    pcVar2 = "cgroupfs";
                    if (lVar1 != 0x27e0eb) {
                      if (lVar1 < 0x27e0ec) {
                        pcVar2 = "ecryptfs";
                        if (lVar1 != 0xf15f) {
                          if (lVar1 != 0x11954) goto LAB_0010418a;
                          pcVar2 = "ufs";
                        }
                      }
                      else {
                        if (lVar1 != 0x414a53) goto LAB_0010418a;
                        pcVar2 = "efs";
                      }
                    }
                  }
                  else {
                    pcVar2 = "tmpfs";
                    if (lVar1 != 0x1021994) {
                      if (lVar1 == 0x1021997) {
                        pcVar2 = "v9fs";
                      }
                      else {
                        if (lVar1 != 0xc36400) goto LAB_0010418a;
                        pcVar2 = "ceph";
                      }
                    }
                  }
                }
              }
              else {
                pcVar2 = "sysv2";
                if (lVar1 != 0x12ff7b6) {
                  if (lVar1 < 0x12ff7b7) {
                    pcVar2 = "xenix";
                    if (lVar1 != 0x12ff7b4) {
                      if (lVar1 == 0x12ff7b5) {
                        pcVar2 = "sysv4";
                      }
                      else {
                        if (lVar1 != 0x12fd16d) goto LAB_0010418a;
                        pcVar2 = "xia";
                      }
                    }
                  }
                  else {
                    pcVar2 = "ibrix";
                    if (lVar1 != 0x13111a8) {
                      if (lVar1 == 0x7655821) {
                        pcVar2 = "rdt";
                      }
                      else {
                        if (lVar1 != 0x12ff7b7) goto LAB_0010418a;
                        pcVar2 = "coh";
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pcVar2 = "bfs";
            if (lVar1 != 0x1badface) {
              if (lVar1 < 0x1badfacf) {
                pcVar2 = "balloon-kvm-fs";
                if (lVar1 != 0x13661366) {
                  if (lVar1 < 0x13661367) {
                    pcVar2 = "lustre";
                    if (lVar1 != 0xbd00bd0) {
                      if (lVar1 == 0x11307854) {
                        pcVar2 = "inodefs";
                      }
                      else {
                        if (lVar1 != 0xbad1dea) goto LAB_0010418a;
                        pcVar2 = "futexfs";
                      }
                    }
                  }
                  else {
                    pcVar2 = "mqueue";
                    if (lVar1 != 0x19800202) {
                      if (lVar1 == 0x19830326) {
                        pcVar2 = "fhgfs";
                      }
                      else {
                        if (lVar1 != 0x15013346) goto LAB_0010418a;
                        pcVar2 = "udf";
                      }
                    }
                  }
                }
              }
              else {
                pcVar2 = "inotifyfs";
                if (lVar1 != 0x2bad1dea) {
                  if (lVar1 < 0x2bad1deb) {
                    pcVar2 = "ubifs";
                    if (lVar1 != 0x24051905) {
                      if (lVar1 == 0x28cd3d45) {
                        pcVar2 = "cramfs";
                      }
                      else {
                        if (lVar1 != 0x2011bab0) goto LAB_0010418a;
                        pcVar2 = "exfat";
                      }
                    }
                  }
                  else {
                    pcVar2 = "jfs";
                    if (lVar1 != 0x3153464a) {
                      if (lVar1 == 0x42465331) {
                        pcVar2 = "befs";
                      }
                      else {
                        if (lVar1 != 0x2fc12fc1) goto LAB_0010418a;
                        pcVar2 = "zfs";
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (lVar1 == 0x67596969) {
      pcVar2 = "rpc_pipefs";
    }
    else if (lVar1 < 0x6759696a) {
      pcVar2 = "zsmallocfs";
      if (lVar1 != 0x58295829) {
        if (lVar1 < 0x5829582a) {
          pcVar2 = "secretmem";
          if (lVar1 != 0x5345434d) {
            if (lVar1 < 0x5345434e) {
              pcVar2 = "exfs";
              if (lVar1 != 0x45584653) {
                if (lVar1 < 0x45584654) {
                  pcVar2 = "cramfs-wend";
                  if (lVar1 != 0x453dcd28) {
                    if (lVar1 < 0x453dcd29) {
                      pcVar2 = "smackfs";
                      if (lVar1 != 0x43415d53) {
                        if (lVar1 != 0x444d4142) goto LAB_0010418a;
                        pcVar2 = "dma-buf-fs";
                      }
                    }
                    else {
                      if (lVar1 != 0x454d444d) goto LAB_0010418a;
                      pcVar2 = "devmem";
                    }
                  }
                }
                else {
                  pcVar2 = "pipefs";
                  if (lVar1 != 0x50495045) {
                    if (lVar1 == 0x52654973) {
                      pcVar2 = "reiserfs";
                    }
                    else {
                      if (lVar1 != 0x47504653) goto LAB_0010418a;
                      pcVar2 = "gpfs";
                    }
                  }
                }
              }
            }
            else {
              pcVar2 = "ntfs";
              if (lVar1 != 0x5346544e) {
                if (lVar1 < 0x5346544f) {
                  pcVar2 = "afs";
                  if (lVar1 != 0x5346414f) {
                    if (lVar1 == 0x53464846) {
                      pcVar2 = "wslfs";
                    }
                    else {
                      if (lVar1 != 0x5346314d) goto LAB_0010418a;
                      pcVar2 = "m1fs";
                    }
                  }
                }
                else {
                  pcVar2 = "ufs";
                  if (lVar1 != 0x54190100) {
                    if (lVar1 == 0x565a4653) {
                      pcVar2 = "vzfs";
                    }
                    else {
                      if (lVar1 != 0x534f434b) goto LAB_0010418a;
                      pcVar2 = "sockfs";
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pcVar2 = "bdevfs";
          if (lVar1 != 0x62646576) {
            if (lVar1 < 0x62646577) {
              pcVar2 = "sdcardfs";
              if (lVar1 != 0x5dca2df5) {
                if (lVar1 < 0x5dca2df6) {
                  pcVar2 = "aafs";
                  if (lVar1 != 0x5a3c69f0) {
                    if (lVar1 == 0x5a4f4653) {
                      pcVar2 = "zonefs";
                    }
                    else {
                      if (lVar1 != 0x58465342) goto LAB_0010418a;
                      pcVar2 = "xfs";
                    }
                  }
                }
                else {
                  pcVar2 = "pstorefs";
                  if (lVar1 != 0x6165676c) {
                    if (lVar1 == 0x61756673) {
                      pcVar2 = "aufs";
                    }
                    else {
                      if (lVar1 != 0x61636673) goto LAB_0010418a;
                      pcVar2 = "acfs";
                    }
                  }
                }
              }
            }
            else {
              pcVar2 = "debugfs";
              if (lVar1 != 0x64626720) {
                if (lVar1 < 0x64626721) {
                  pcVar2 = "sysfs";
                  if (lVar1 != 0x62656572) {
                    if (lVar1 == 0x63677270) {
                      pcVar2 = "cgroup2fs";
                    }
                    else {
                      if (lVar1 != 0x62656570) goto LAB_0010418a;
                      pcVar2 = "configfs";
                    }
                  }
                }
                else {
                  pcVar2 = "fusectl";
                  if (lVar1 != 0x65735543) {
                    if (lVar1 == 0x65735546) {
                      pcVar2 = "fuseblk";
                    }
                    else {
                      if (lVar1 != 0x64646178) goto LAB_0010418a;
                      pcVar2 = "daxfs";
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar2 = "hugetlbfs";
      if (lVar1 != 0x958458f6) {
        if (lVar1 < 0x958458f7) {
          pcVar2 = "coda";
          if (lVar1 != 0x73757245) {
            if (lVar1 < 0x73757246) {
              pcVar2 = "nsfs";
              if (lVar1 != 0x6e736673) {
                if (lVar1 < 0x6e736674) {
                  pcVar2 = "binderfs";
                  if (lVar1 != 0x6c6f6f70) {
                    if (lVar1 < 0x6c6f6f71) {
                      pcVar2 = "qnx6";
                      if (lVar1 != 0x68191122) {
                        if (lVar1 != 0x6b414653) goto LAB_0010418a;
                        pcVar2 = "k-afs";
                      }
                    }
                    else {
                      if (lVar1 != 0x6e667364) goto LAB_0010418a;
                      pcVar2 = "nfsd";
                    }
                  }
                }
                else {
                  pcVar2 = "squashfs";
                  if (lVar1 != 0x73717368) {
                    if (lVar1 == 0x73727279) {
                      pcVar2 = "btrfs_test";
                    }
                    else {
                      if (lVar1 != 0x73636673) goto LAB_0010418a;
                      pcVar2 = "securityfs";
                    }
                  }
                }
              }
            }
            else {
              pcVar2 = "overlayfs";
              if (lVar1 != 0x794c7630) {
                if (lVar1 < 0x794c7631) {
                  pcVar2 = "tracefs";
                  if (lVar1 != 0x74726163) {
                    if (lVar1 == 0x786f4256) {
                      pcVar2 = "vboxsf";
                    }
                    else {
                      if (lVar1 != 0x7461636f) goto LAB_0010418a;
                      pcVar2 = "ocfs2";
                    }
                  }
                }
                else {
                  pcVar2 = "ramfs";
                  if (lVar1 != 0x858458f6) {
                    if (lVar1 == 0x9123683e) {
                      pcVar2 = "btrfs";
                    }
                    else {
                      if (lVar1 != 0x7c7c6673) goto LAB_0010418a;
                      pcVar2 = "prl_fs";
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pcVar2 = "bpf_fs";
          if (lVar1 != 0xcafe4a11) {
            if (lVar1 < 0xcafe4a12) {
              pcVar2 = "vmhgfs";
              if (lVar1 != 0xbacbacbc) {
                if (lVar1 < 0xbacbacbd) {
                  pcVar2 = "panfs";
                  if (lVar1 != 0xaad7aaea) {
                    if (lVar1 == 0xabba1974) {
                      pcVar2 = "xenfs";
                    }
                    else {
                      if (lVar1 != 0xa501fcf5) goto LAB_0010418a;
                      pcVar2 = "vxfs";
                    }
                  }
                }
                else {
                  pcVar2 = "ppc-cmm-fs";
                  if (lVar1 != 0xc7571590) {
                    if (lVar1 == 0xc97e8168) {
                      pcVar2 = "logfs";
                    }
                    else {
                      if (lVar1 != 0xbeefdead) goto LAB_0010418a;
                      pcVar2 = "snfs";
                    }
                  }
                }
              }
            }
            else {
              pcVar2 = "selinux";
              if (lVar1 != 0xf97cff8c) {
                if (lVar1 < 0xf97cff8d) {
                  pcVar2 = "erofs";
                  if (lVar1 != 0xe0f5e1e2) {
                    if (lVar1 == 0xf2f52010) {
                      pcVar2 = "f2fs";
                    }
                    else {
                      if (lVar1 != 0xde5e81e4) goto LAB_0010418a;
                      pcVar2 = "efivarfs";
                    }
                  }
                }
                else {
                  pcVar2 = "smb2";
                  if (lVar1 != 0xfe534d42) {
                    if (lVar1 == 0xff534d42) {
                      pcVar2 = "cifs";
                    }
                    else {
                      if (lVar1 != 0xf995e849) goto LAB_0010418a;
                      pcVar2 = "hpfs";
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    out_string(pformat,prefix_len,pcVar2);
    break;
  default:
    pcVar2 = stdout->_IO_write_ptr;
    if (pcVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '?';
    }
    else {
      __overflow(stdout,0x3f);
    }
    break;
  case 'a':
    out_int(pformat,prefix_len,statfsbuf->f_bavail);
    break;
  case 'b':
    out_int(pformat,prefix_len,statfsbuf->f_blocks);
    break;
  case 'c':
    arg = statfsbuf->f_files;
LAB_00103462:
    out_uint(pformat,prefix_len,arg);
    return false;
  case 'd':
    out_int(pformat,prefix_len,statfsbuf->f_ffree);
    break;
  case 'f':
    out_int(pformat,prefix_len,statfsbuf->f_bfree);
    break;
  case 'i':
    out_uint_x(pformat,prefix_len,
               CONCAT44((statfsbuf->f_fsid).__val[0],(statfsbuf->f_fsid).__val[1]));
    break;
  case 'l':
    out_uint(pformat,prefix_len,statfsbuf->f_namelen);
    break;
  case 'n':
    out_string(pformat,prefix_len,filename);
    break;
  case 's':
    out_uint(pformat,prefix_len,statfsbuf->f_bsize);
    break;
  case 't':
    out_uint_x(pformat,prefix_len,statfsbuf->f_type);
  }
  return false;
}

