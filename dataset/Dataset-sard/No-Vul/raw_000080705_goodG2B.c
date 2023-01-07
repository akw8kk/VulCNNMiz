static void FUN1()
{
    wchar_t * VAR1;
    CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_vfprintf_34_unionType VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    
    wcscpy(VAR1, VAR4"");
    VAR2.VAR5 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR6;
        FUN2(VAR1, VAR1);
    }
}