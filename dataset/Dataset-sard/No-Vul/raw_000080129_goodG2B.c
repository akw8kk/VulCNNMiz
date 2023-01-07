static void FUN1()
{
    char * VAR1;
    CWE134_Uncontrolled_Format_String__char_file_vfprintf_34_unionType VAR2;
    char VAR3[100] = "";
    VAR1 = VAR3;
    
    strcpy(VAR1, "");
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        FUN2(VAR1, VAR1);
    }
}