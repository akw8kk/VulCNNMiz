static void FUN1()
{
    char * VAR1;
    CWE124_Buffer_Underwrite__char_alloca_memmove_67_structType VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    
    VAR1 = VAR3;
    VAR2.VAR4 = VAR1;
    FUN3(VAR2);
}