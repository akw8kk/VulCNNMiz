void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR4[100] = VAR3"";
        
        FUN3(VAR4, 100-1, VAR1);
        FUN4(VAR4);
    }
}