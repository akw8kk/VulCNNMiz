static void FUN1()
{
    wchar_t * VAR1;
    CWE78_OS_Command_Injection__wchar_t_connect_socket_system_34_unionType VAR2;
    wchar_t VAR3[100] = VAR4;
    VAR1 = VAR3;
    
    wcscat(VAR1, VAR5"");
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        
        if (FUN2(VAR1) <= 0)
        {
            FUN3("");
            FUN4(1);
        }
    }
}