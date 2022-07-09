
/* WARNING: Unknown calling convention yet parameter storage is locked */

reg_errcode_t build_charclass(void)

{
  ulong *puVar1;
  ushort *puVar2;
  int iVar3;
  ulong uVar4;
  wctype_t wVar5;
  ushort **ppuVar6;
  void *__ptr;
  ulong *in_RCX;
  long lVar7;
  void **in_RDX;
  long in_RSI;
  byte *pbVar8;
  long in_RDI;
  byte *pbVar9;
  ulong *in_R8;
  char *in_R9;
  bool bVar10;
  bool bVar11;
  undefined uVar12;
  bool bVar13;
  undefined uVar14;
  byte bVar15;
  ulong in_stack_00000008;
  
  bVar15 = 0;
  bVar10 = false;
  bVar13 = (in_stack_00000008 & 0x400000) == 0;
  if (!bVar13) {
    lVar7 = 6;
    pbVar8 = (byte *)in_R9;
    pbVar9 = (byte *)"upper";
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar13 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar13);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar13) == bVar10;
    if (!bVar10) {
      lVar7 = 6;
      pbVar8 = (byte *)in_R9;
      pbVar9 = (byte *)"lower";
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      __ptr = *in_RDX;
      if ((!bVar11 && !bVar10) == bVar11) {
        in_R9 = "alpha";
      }
      uVar4 = *in_RCX;
      uVar12 = *in_R8 < uVar4;
      uVar14 = *in_R8 == uVar4;
      goto joined_r0x00116212;
    }
    in_R9 = "alpha";
  }
  uVar4 = *in_RCX;
  __ptr = *in_RDX;
  uVar12 = *in_R8 < uVar4;
  uVar14 = *in_R8 == uVar4;
joined_r0x00116212:
  if ((bool)uVar14) {
    uVar4 = uVar4 * 2 + 1;
    __ptr = realloc(__ptr,uVar4 * 8);
    uVar12 = false;
    uVar14 = __ptr == (void *)0x0;
    if ((bool)uVar14) {
      return _REG_ESPACE;
    }
    *in_RDX = __ptr;
    *in_R8 = uVar4;
    uVar4 = *in_RCX;
  }
  *in_RCX = uVar4 + 1;
  wVar5 = wctype(in_R9);
  lVar7 = 6;
  *(wctype_t *)((long)__ptr + uVar4 * 8) = wVar5;
  pbVar8 = (byte *)in_R9;
  pbVar9 = (byte *)"alnum";
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    uVar12 = *pbVar8 < *pbVar9;
    uVar14 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
    pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
  } while ((bool)uVar14);
  bVar10 = false;
  bVar13 = (!(bool)uVar12 && !(bool)uVar14) == (bool)uVar12;
  if (bVar13) {
    ppuVar6 = __ctype_b_loc();
    lVar7 = 0;
    puVar2 = *ppuVar6;
    if (in_RDI == 0) {
      do {
        if ((*(byte *)(puVar2 + lVar7) & 8) != 0) {
          puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
          *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x100);
    }
    else {
      lVar7 = 0;
      do {
        if ((*(byte *)(puVar2 + lVar7) & 8) != 0) {
          puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
          *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x100);
    }
  }
  else {
    lVar7 = 6;
    pbVar8 = (byte *)in_R9;
    pbVar9 = &DAT_00124760;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar13 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
    } while (bVar13);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar13) == bVar10;
    if (bVar10) {
      ppuVar6 = __ctype_b_loc();
      lVar7 = 0;
      puVar2 = *ppuVar6;
      if (in_RDI == 0) {
        do {
          if ((*(byte *)(puVar2 + lVar7) & 2) != 0) {
            puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
            *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x100);
      }
      else {
        lVar7 = 0;
        do {
          if ((*(byte *)(puVar2 + lVar7) & 2) != 0) {
            puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
            *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x100);
      }
    }
    else {
      lVar7 = 6;
      pbVar8 = (byte *)in_R9;
      pbVar9 = (byte *)"lower";
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
      } while (bVar10);
      bVar13 = false;
      bVar10 = (!bVar11 && !bVar10) == bVar11;
      if (bVar10) {
        ppuVar6 = __ctype_b_loc();
        lVar7 = 0;
        puVar2 = *ppuVar6;
        if (in_RDI == 0) {
          do {
            if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 2) != 0) {
              puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
              *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x100);
        }
        else {
          lVar7 = 0;
          do {
            if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 2) != 0) {
              puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
              *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x100);
        }
      }
      else {
        lVar7 = 6;
        pbVar8 = (byte *)in_R9;
        pbVar9 = (byte *)"space";
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar13 = *pbVar8 < *pbVar9;
          bVar10 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
          pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
        } while (bVar10);
        bVar11 = false;
        bVar10 = (!bVar13 && !bVar10) == bVar13;
        if (bVar10) {
          ppuVar6 = __ctype_b_loc();
          lVar7 = 0;
          puVar2 = *ppuVar6;
          if (in_RDI == 0) {
            do {
              if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 0x20) != 0) {
                puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 != 0x100);
          }
          else {
            lVar7 = 0;
            do {
              if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 0x20) != 0) {
                puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
                *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 != 0x100);
          }
        }
        else {
          lVar7 = 6;
          pbVar8 = (byte *)in_R9;
          pbVar9 = (byte *)"alpha";
          do {
            if (lVar7 == 0) break;
            lVar7 = lVar7 + -1;
            bVar11 = *pbVar8 < *pbVar9;
            bVar10 = *pbVar8 == *pbVar9;
            pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
            pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
          } while (bVar10);
          bVar13 = false;
          bVar10 = (!bVar11 && !bVar10) == bVar11;
          if (bVar10) {
            ppuVar6 = __ctype_b_loc();
            lVar7 = 0;
            puVar2 = *ppuVar6;
            if (in_RDI == 0) {
              do {
                if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 4) != 0) {
                  puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                  *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                }
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0x100);
            }
            else {
              lVar7 = 0;
              do {
                if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 4) != 0) {
                  puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
                  *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                }
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0x100);
            }
          }
          else {
            lVar7 = 6;
            pbVar8 = (byte *)in_R9;
            pbVar9 = &DAT_00124785;
            do {
              if (lVar7 == 0) break;
              lVar7 = lVar7 + -1;
              bVar13 = *pbVar8 < *pbVar9;
              bVar10 = *pbVar8 == *pbVar9;
              pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
              pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
            } while (bVar10);
            bVar11 = false;
            bVar10 = (!bVar13 && !bVar10) == bVar13;
            if (bVar10) {
              ppuVar6 = __ctype_b_loc();
              lVar7 = 0;
              puVar2 = *ppuVar6;
              if (in_RDI == 0) {
                do {
                  if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 8) != 0) {
                    puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                    *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 0x100);
              }
              else {
                lVar7 = 0;
                do {
                  if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 8) != 0) {
                    puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
                    *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 0x100);
              }
            }
            else {
              lVar7 = 6;
              pbVar8 = (byte *)in_R9;
              pbVar9 = (byte *)"print";
              do {
                if (lVar7 == 0) break;
                lVar7 = lVar7 + -1;
                bVar11 = *pbVar8 < *pbVar9;
                bVar10 = *pbVar8 == *pbVar9;
                pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
              } while (bVar10);
              bVar13 = false;
              bVar10 = (!bVar11 && !bVar10) == bVar11;
              if (bVar10) {
                ppuVar6 = __ctype_b_loc();
                lVar7 = 0;
                puVar2 = *ppuVar6;
                if (in_RDI == 0) {
                  do {
                    if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 0x40) != 0) {
                      puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                      *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                    }
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0x100);
                }
                else {
                  lVar7 = 0;
                  do {
                    if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 0x40) != 0) {
                      puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
                      *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                    }
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0x100);
                }
              }
              else {
                lVar7 = 6;
                pbVar8 = (byte *)in_R9;
                pbVar9 = (byte *)"upper";
                do {
                  if (lVar7 == 0) break;
                  lVar7 = lVar7 + -1;
                  bVar13 = *pbVar8 < *pbVar9;
                  bVar10 = *pbVar8 == *pbVar9;
                  pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                  pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                } while (bVar10);
                bVar11 = false;
                bVar10 = (!bVar13 && !bVar10) == bVar13;
                if (bVar10) {
                  ppuVar6 = __ctype_b_loc();
                  lVar7 = 0;
                  puVar2 = *ppuVar6;
                  if (in_RDI == 0) {
                    do {
                      if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 1) != 0) {
                        puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                        *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                      }
                      lVar7 = lVar7 + 1;
                    } while (lVar7 != 0x100);
                  }
                  else {
                    lVar7 = 0;
                    do {
                      if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 1) != 0) {
                        puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18));
                        *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                      }
                      lVar7 = lVar7 + 1;
                    } while (lVar7 != 0x100);
                  }
                }
                else {
                  lVar7 = 6;
                  pbVar8 = (byte *)in_R9;
                  pbVar9 = (byte *)"blank";
                  do {
                    if (lVar7 == 0) break;
                    lVar7 = lVar7 + -1;
                    bVar11 = *pbVar8 < *pbVar9;
                    bVar10 = *pbVar8 == *pbVar9;
                    pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                    pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                  } while (bVar10);
                  bVar13 = false;
                  bVar10 = (!bVar11 && !bVar10) == bVar11;
                  if (bVar10) {
                    ppuVar6 = __ctype_b_loc();
                    lVar7 = 0;
                    puVar2 = *ppuVar6;
                    if (in_RDI == 0) {
                      do {
                        if ((*(byte *)(puVar2 + lVar7) & 1) != 0) {
                          puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                          *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                        }
                        lVar7 = lVar7 + 1;
                      } while (lVar7 != 0x100);
                    }
                    else {
                      lVar7 = 0;
                      do {
                        if ((*(byte *)(puVar2 + lVar7) & 1) != 0) {
                          puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 & 0x18)
                                            );
                          *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                        }
                        lVar7 = lVar7 + 1;
                      } while (lVar7 != 0x100);
                    }
                  }
                  else {
                    lVar7 = 6;
                    pbVar8 = (byte *)in_R9;
                    pbVar9 = (byte *)"graph";
                    do {
                      if (lVar7 == 0) break;
                      lVar7 = lVar7 + -1;
                      bVar13 = *pbVar8 < *pbVar9;
                      bVar10 = *pbVar8 == *pbVar9;
                      pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                      pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                    } while (bVar10);
                    if ((!bVar13 && !bVar10) == bVar13) {
                      ppuVar6 = __ctype_b_loc();
                      lVar7 = 0;
                      puVar2 = *ppuVar6;
                      if (in_RDI == 0) {
                        do {
                          if ((short)puVar2[lVar7] < 0) {
                            puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                            *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                          }
                          lVar7 = lVar7 + 1;
                        } while (lVar7 != 0x100);
                      }
                      else {
                        lVar7 = 0;
                        do {
                          if ((short)puVar2[lVar7] < 0) {
                            puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 &
                                                               0x18));
                            *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                          }
                          lVar7 = lVar7 + 1;
                        } while (lVar7 != 0x100);
                      }
                    }
                    else {
                      iVar3 = strcmp(in_R9,"punct");
                      if (iVar3 == 0) {
                        ppuVar6 = __ctype_b_loc();
                        lVar7 = 0;
                        puVar2 = *ppuVar6;
                        if (in_RDI == 0) {
                          do {
                            if ((*(byte *)(puVar2 + lVar7) & 4) != 0) {
                              puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                              *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
                        }
                        else {
                          lVar7 = 0;
                          do {
                            if ((*(byte *)(puVar2 + lVar7) & 4) != 0) {
                              puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 &
                                                                 0x18));
                              *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
                        }
                      }
                      else {
                        iVar3 = strcmp(in_R9,"xdigit");
                        if (iVar3 != 0) {
                          return _REG_ECTYPE;
                        }
                        ppuVar6 = __ctype_b_loc();
                        lVar7 = 0;
                        puVar2 = *ppuVar6;
                        if (in_RDI == 0) {
                          do {
                            if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 0x10) != 0) {
                              puVar1 = (ulong *)(in_RSI + (lVar7 >> 6) * 8);
                              *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
                        }
                        else {
                          lVar7 = 0;
                          do {
                            if ((*(byte *)((long)puVar2 + lVar7 * 2 + 1) & 0x10) != 0) {
                              puVar1 = (ulong *)(in_RSI + (ulong)(*(byte *)(in_RDI + lVar7) >> 3 &
                                                                 0x18));
                              *puVar1 = *puVar1 | 1 << (*(byte *)(in_RDI + lVar7) & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
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
    }
  }
  return _REG_NOERROR;
}

