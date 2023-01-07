void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR3[50] = VAR4"";
        
        wcsncpy(VAR3, VAR1, wcslen(VAR1));
        VAR3[50-1] = VAR4''; 
        FUN3(VAR1);
    }
}