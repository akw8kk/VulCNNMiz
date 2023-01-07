static void FUN1()
{
    char * VAR1;
    CWE78_OS_Command_Injection__char_listen_socket_system_34_unionType VAR2;
    char VAR3[100] = VAR4;
    VAR1 = VAR3;
    
    strcat(VAR1, "");
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        
        if (FUN2(VAR1) <= 0)
        {
            FUN3("");
            FUN4(1);
        }
    }
}