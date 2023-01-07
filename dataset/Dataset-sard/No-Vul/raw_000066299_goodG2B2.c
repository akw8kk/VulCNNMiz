static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    VAR3 = 1; 
    VAR1 = FUN3(VAR1);
    {
        wchar_t VAR4[50] = VAR5"";
        
        wcsncpy(VAR4, VAR1, wcslen(VAR1));
        VAR4[50-1] = VAR5''; 
        FUN4(VAR1);
    }
}