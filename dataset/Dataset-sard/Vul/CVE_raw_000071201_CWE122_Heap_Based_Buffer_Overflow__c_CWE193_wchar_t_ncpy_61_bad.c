void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR2[10+1] = VAR3;
        
        
        wcsncpy(VAR1, VAR2, wcslen(VAR2) + 1);
        FUN3(VAR1);
        free(VAR1);
    }
}