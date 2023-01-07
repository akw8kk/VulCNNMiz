static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3;
    VAR1 = VAR2;
    
    wcscat(VAR1, VAR4"");
    {
        wchar_t * VAR5 = VAR1;
        wchar_t * VAR1 = VAR5;
        
        if (FUN2(VAR1) <= 0)
        {
            FUN3("");
            FUN4(1);
        }
    }
}