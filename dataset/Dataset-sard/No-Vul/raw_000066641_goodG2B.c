static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR3[50] = VAR4"";
        
        FUN3(VAR3, wcslen(VAR1), VAR4"", VAR1);
        FUN4(VAR1);
    }
}