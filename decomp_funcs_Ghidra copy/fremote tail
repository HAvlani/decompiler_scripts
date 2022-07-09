
_Bool fremote(int fd,char *name)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  _Bool _Var6;
  statfs buf;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = fstatfs(fd,(statfs *)&buf);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    _Var6 = true;
    if (*piVar3 != 0x26) {
      pcVar4 = quotearg_style(shell_escape_always_quoting_style,name);
      uVar5 = dcgettext(0,"cannot determine location of %s. reverting to polling",5);
      error(0,*piVar3,uVar5,pcVar4);
    }
    goto LAB_00105d13;
  }
  if (buf.f_type != 0x2bad1dea) {
    if (buf.f_type < 0x2bad1deb) {
      if (buf.f_type < 0x9fa3) {
        if (buf.f_type < 0x9fa0) {
          if (buf.f_type < 0x4007) {
            if (0x3fff < buf.f_type) {
              _Var6 = (1 << ((byte)buf.f_type & 0x3f) & 0x51U) == 0;
              goto LAB_00105d13;
            }
            if (buf.f_type < 0x1390) {
              if (0x1372 < buf.f_type) {
                _Var6 = (1 << ((byte)buf.f_type + 0x8d & 0x3f) & 0x10001401U) == 0;
                goto LAB_00105d13;
              }
              if (buf.f_type != 0x187) {
                if (buf.f_type < 0x188) {
                  _Var6 = (buf.f_type - 0x2fU & 0xfffffffffffffffb) != 0;
                }
                else {
                  _Var6 = buf.f_type != 0x7c0;
                }
                goto LAB_00105d13;
              }
            }
            else if (buf.f_type != 0x2478) {
              if (0x2478 < buf.f_type) {
                _Var6 = buf.f_type != 0x3434;
                goto LAB_00105d13;
              }
              if (buf.f_type != 0x1cd1) {
                _Var6 = buf.f_type != 0x2468;
                goto LAB_00105d13;
              }
            }
          }
          else if (buf.f_type != 0x4d5a) {
            if (buf.f_type < 0x4d5b) {
              if (buf.f_type != 0x4858) {
                if (0x4858 < buf.f_type) {
                  _Var6 = buf.f_type != 0x4d44;
                  goto LAB_00105d13;
                }
                if (buf.f_type != 0x4244) {
                  _Var6 = buf.f_type != 0x482b;
                  goto LAB_00105d13;
                }
              }
            }
            else if (buf.f_type != 0x72b6) {
              if (0x72b6 < buf.f_type) {
                _Var6 = buf.f_type != 0x9660;
                goto LAB_00105d13;
              }
              if (buf.f_type != 0x5df5) {
                _Var6 = buf.f_type != 0x7275;
                goto LAB_00105d13;
              }
            }
          }
        }
      }
      else if (buf.f_type < 0x12ff7b8) {
        if ((buf.f_type < 0x12ff7b4) && (buf.f_type != 0x27e0eb)) {
          if (buf.f_type < 0x27e0ec) {
            if (buf.f_type != 0xef53) {
              if (buf.f_type < 0xef54) {
                if ((buf.f_type != 0xadff) && (buf.f_type != 0xef51)) {
                  _Var6 = buf.f_type != 0xadf5;
                  goto LAB_00105d13;
                }
              }
              else if (buf.f_type != 0xf15f) {
                _Var6 = buf.f_type != 0x11954;
                goto LAB_00105d13;
              }
            }
          }
          else if (buf.f_type != 0x1021994) {
            if (buf.f_type < 0x1021995) {
              if (buf.f_type != 0x414a53) {
                _Var6 = buf.f_type != 0xc0ffee;
                goto LAB_00105d13;
              }
            }
            else if (buf.f_type != 0x1021997) {
              _Var6 = buf.f_type != 0x12fd16d;
              goto LAB_00105d13;
            }
          }
        }
      }
      else if (buf.f_type != 0x15013346) {
        if (buf.f_type < 0x15013347) {
          if (buf.f_type != 0xbad1dea) {
            if (buf.f_type < 0xbad1deb) {
              if (buf.f_type != 0x7655821) {
                _Var6 = buf.f_type != 0x9041934;
                goto LAB_00105d13;
              }
            }
            else if (buf.f_type != 0x11307854) {
              _Var6 = buf.f_type != 0x13661366;
              goto LAB_00105d13;
            }
          }
        }
        else if (buf.f_type != 0x2011bab0) {
          if (buf.f_type < 0x2011bab1) {
            if (buf.f_type != 0x19800202) {
              _Var6 = buf.f_type != 0x1badface;
              goto LAB_00105d13;
            }
          }
          else if (buf.f_type != 0x24051905) {
            _Var6 = buf.f_type != 0x28cd3d45;
            goto LAB_00105d13;
          }
        }
      }
    }
    else if (buf.f_type != 0x62656570) {
      if (buf.f_type < 0x62656571) {
        if (buf.f_type != 0x53464846) {
          if (buf.f_type < 0x53464847) {
            if (buf.f_type != 0x453dcd28) {
              if (buf.f_type < 0x453dcd29) {
                if (buf.f_type != 0x42494e4d) {
                  if (buf.f_type < 0x42494e4e) {
                    if ((buf.f_type != 0x3153464a) && (buf.f_type != 0x42465331)) {
                      _Var6 = buf.f_type != 0x2fc12fc1;
                      goto LAB_00105d13;
                    }
                  }
                  else if (buf.f_type != 0x43415d53) {
                    _Var6 = buf.f_type != 0x444d4142;
                    goto LAB_00105d13;
                  }
                }
              }
              else if (buf.f_type != 0x52654973) {
                if (buf.f_type < 0x52654974) {
                  if (buf.f_type != 0x454d444d) {
                    _Var6 = buf.f_type != 0x45584653;
                    goto LAB_00105d13;
                  }
                }
                else if (buf.f_type != 0x5345434d) {
                  _Var6 = buf.f_type != 0x5346314d;
                  goto LAB_00105d13;
                }
              }
            }
          }
          else if (buf.f_type != 0x58465342) {
            if (buf.f_type < 0x58465343) {
              if (buf.f_type != 0x54190100) {
                if (buf.f_type < 0x54190101) {
                  if (buf.f_type != 0x5346544e) {
                    _Var6 = buf.f_type != 0x534f434b;
                    goto LAB_00105d13;
                  }
                }
                else if (buf.f_type != 0x565a4653) {
                  _Var6 = buf.f_type != 0x58295829;
                  goto LAB_00105d13;
                }
              }
            }
            else if (buf.f_type != 0x5dca2df5) {
              if (buf.f_type < 0x5dca2df6) {
                if (buf.f_type != 0x5a3c69f0) {
                  _Var6 = buf.f_type != 0x5a4f4653;
                  goto LAB_00105d13;
                }
              }
              else if (buf.f_type != 0x6165676c) {
                _Var6 = buf.f_type != 0x62646576;
                goto LAB_00105d13;
              }
            }
          }
        }
      }
      else if (buf.f_type != 0x858458f6) {
        if (buf.f_type < 0x858458f7) {
          if (buf.f_type != 0x6c6f6f70) {
            if (buf.f_type < 0x6c6f6f71) {
              if (buf.f_type != 0x64646178) {
                if (buf.f_type < 0x64646179) {
                  if ((buf.f_type != 0x63677270) && (buf.f_type != 0x64626720)) {
                    _Var6 = buf.f_type != 0x62656572;
                    goto LAB_00105d13;
                  }
                }
                else if (buf.f_type != 0x67596969) {
                  _Var6 = buf.f_type != 0x68191122;
                  goto LAB_00105d13;
                }
              }
            }
            else if (buf.f_type != 0x73717368) {
              if (buf.f_type < 0x73717369) {
                if (buf.f_type != 0x6e736673) {
                  _Var6 = buf.f_type != 0x73636673;
                  goto LAB_00105d13;
                }
              }
              else if (buf.f_type != 0x73727279) {
                _Var6 = buf.f_type != 0x74726163;
                goto LAB_00105d13;
              }
            }
          }
        }
        else if (buf.f_type != 0xcafe4a11) {
          if (buf.f_type < 0xcafe4a12) {
            if (buf.f_type != 0xabba1974) {
              if (buf.f_type < 0xabba1975) {
                if (buf.f_type != 0x9123683e) {
                  _Var6 = buf.f_type != 0x958458f6;
                  goto LAB_00105d13;
                }
              }
              else if (buf.f_type != 0xc7571590) {
                _Var6 = buf.f_type != 0xc97e8168;
                goto LAB_00105d13;
              }
            }
          }
          else if (buf.f_type != 0xf2f52010) {
            if (buf.f_type < 0xf2f52011) {
              if (buf.f_type != 0xde5e81e4) {
                _Var6 = buf.f_type != 0xe0f5e1e2;
                goto LAB_00105d13;
              }
            }
            else if (buf.f_type != 0xf97cff8c) {
              _Var6 = buf.f_type != 0xf995e849;
              goto LAB_00105d13;
            }
          }
        }
      }
    }
  }
  _Var6 = false;
LAB_00105d13:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

