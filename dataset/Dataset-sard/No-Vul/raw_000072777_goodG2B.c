static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR2[50] = VAR3"";
        
        FUN3(VAR2, wcslen(VAR1), VAR3"", VAR1);
        FUN4(VAR1);
        free(VAR1);
    }
}