static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100] = VAR5;
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        
        wcscat(VAR1, VAR6"");
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            VAR7 *VAR8;
            
            VAR8 = FUN2(VAR1, VAR6"");
            if (VAR8 != NULL)
            {
                FUN3(VAR8);
            }
        }
    }
}