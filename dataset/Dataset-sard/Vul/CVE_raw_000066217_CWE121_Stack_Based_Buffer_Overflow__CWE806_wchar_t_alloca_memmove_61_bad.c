void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    VAR1 = FUN3(VAR1);
    {
        wchar_t VAR3[50] = VAR4"";
        
        memmove(VAR3, VAR1, wcslen(VAR1)*sizeof(wchar_t));
        VAR3[50-1] = VAR4''; 
        FUN4(VAR1);
    }
}