static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    if(FUN2())
    {
        {
            
            size_t VAR4 = wcslen(VAR1);
            wchar_t * VAR5 = FUN3(VAR6);
            
            if (VAR5 != NULL)
            {
                
                wcsncat(VAR1+VAR4, VAR5, 100-VAR4-1);
            }
        }
    }
    if(FUN2())
    {
        {
            wchar_t VAR7[100] = VAR3"";
            
            FUN4(VAR7, 100-1, VAR3"", VAR1);
            FUN5(VAR7);
        }
    }
}