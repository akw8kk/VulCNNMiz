static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR3[50] = VAR4"";
        
        FUN3(VAR3, wcslen(VAR1), VAR4"", VAR1);
        FUN4(VAR1);
        free(VAR1);
    }
}