void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    VAR3 = 1; 
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR4[50] = VAR5"";
        
        wcsncpy(VAR4, VAR1, wcslen(VAR1));
        VAR4[50-1] = VAR5''; 
        FUN3(VAR1);
    }
}