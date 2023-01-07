static void FUN1()
{
    char * VAR1;
    CWE134_Uncontrolled_Format_String__char_listen_socket_snprintf_34_unionType VAR2;
    char VAR3[100] = "";
    VAR1 = VAR3;
    
    strcpy(VAR1, "");
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            char VAR6[100] = "";
            
            FUN2(VAR6, 100-1, VAR1);
            FUN3(VAR6);
        }
    }
}