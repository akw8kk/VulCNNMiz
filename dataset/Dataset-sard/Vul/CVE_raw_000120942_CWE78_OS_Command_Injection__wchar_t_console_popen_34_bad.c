void FUN1()
{
    wchar_t * VAR1;
    CWE78_OS_Command_Injection__wchar_t_console_popen_34_unionType VAR2;
    wchar_t VAR3[100] = VAR4;
    VAR1 = VAR3;
    {
        
        size_t VAR5 = wcslen(VAR1);
        
        if (100-VAR5 > 1)
        {
            
            if (FUN2(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                
                VAR5 = wcslen(VAR1);
                if (VAR5 > 0 && VAR1[VAR5-1] == VAR6'')
                {
                    VAR1[VAR5-1] = VAR6'';
                }
            }
            else
            {
                FUN3("");
                
                VAR1[VAR5] = VAR6'';
            }
        }
    }
    VAR2.VAR7 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR8;
        {
            VAR9 *VAR10;
            
            VAR10 = FUN4(VAR1, VAR6"");
            if (VAR10 != NULL)
            {
                FUN5(VAR10);
            }
        }
    }
}