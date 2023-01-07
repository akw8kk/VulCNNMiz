static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3;
    VAR1 = VAR2;
    goto VAR4;
VAR4:
    
    wcscat(VAR1, VAR5"");
    {
        VAR6 *VAR7;
        
        VAR7 = FUN2(VAR1, VAR5"");
        if (VAR7 != NULL)
        {
            FUN3(VAR7);
        }
    }
}