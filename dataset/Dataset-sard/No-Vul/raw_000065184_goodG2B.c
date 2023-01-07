static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2[5];
    wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    
    VAR1 = VAR4;
    VAR1[0] = VAR5''; 
    VAR2[2] = VAR1;
    FUN3(VAR2);
}