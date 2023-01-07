static void FUN1()
{
    wchar_t * VAR1;
    CWE78_OS_Command_Injection__wchar_t_console_popen_34_unionType VAR2;
    wchar_t VAR3[100] = VAR4;
    VAR1 = VAR3;
    
    wcscat(VAR1, VAR5"");
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        {
            VAR8 *VAR9;
            
            VAR9 = FUN2(VAR1, VAR5"");
            if (VAR9 != NULL)
            {
                FUN3(VAR9);
            }
        }
    }
}