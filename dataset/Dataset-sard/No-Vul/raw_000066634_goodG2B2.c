static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    VAR3 = 1; 
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR4[50] = VAR5"";
        
        FUN3(VAR4, wcslen(VAR1), VAR5"", VAR1);
        FUN4(VAR1);
    }
}