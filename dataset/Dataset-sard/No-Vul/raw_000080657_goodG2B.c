static void FUN1()
{
    wchar_t * VAR1;
    CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_snprintf_34_unionType VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    
    wcscpy(VAR1, VAR4"");
    VAR2.VAR5 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR6;
        {
            wchar_t VAR7[100] = VAR4"";
            
            FUN2(VAR7, 100-1, VAR1);
            FUN3(VAR7);
        }
    }
}