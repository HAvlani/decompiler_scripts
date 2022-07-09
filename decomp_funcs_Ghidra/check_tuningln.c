
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool check_tuning(Hash_table *table)

{
  float fVar1;
  Hash_tuning *pHVar2;
  float fVar3;
  
  pHVar2 = (Hash_tuning *)table->bucket;
  if (pHVar2 == &default_tuning) {
    return true;
  }
  fVar1 = pHVar2->growth_threshold;
  if ((((_DAT_0010d1f4 < fVar1) && (fVar1 < DAT_0010d1f8)) &&
      (_DAT_0010d1fc < pHVar2->growth_factor)) && (_DAT_0010d200 <= pHVar2->shrink_threshold)) {
    fVar3 = pHVar2->shrink_threshold + _DAT_0010d1f4;
    if (((fVar3 < pHVar2->shrink_factor) && (pHVar2->shrink_factor <= DAT_0010d204)) &&
       (fVar3 < fVar1)) {
      return true;
    }
  }
  table->bucket = (hash_entry *)&default_tuning;
  return false;
}

