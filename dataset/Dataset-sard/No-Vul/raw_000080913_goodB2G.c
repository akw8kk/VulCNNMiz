static void FUN1()
{
    wchar_t * VAR1;
    CWE134_Uncontrolled_Format_String__wchar_t_console_printf_67_structType VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    {
        
        size_t VAR5 = wcslen(VAR1);
        
        if (100-VAR5 > 1)
        {
            
            if (FUN2(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                
                VAR5 = wcslen(VAR1);
                if (VAR5 > 0 && VAR1[VAR5-1] == VAR4'')
                {
                    VAR1[VAR5-1] = VAR4'';
                }
            }
            else
            {
                FUN3("");
                
                VAR1[VAR5] = VAR4'';
            }
        }
    }
    VAR2.VAR6 = VAR1;
    FUN4(VAR2);
}