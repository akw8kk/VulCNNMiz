static void FUN1()
{
    wchar_t * VAR1;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_67_structType VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    {
        
        size_t VAR5 = wcslen(VAR1);
        wchar_t * VAR6 = FUN2(VAR7);
        
        if (VAR6 != NULL)
        {
            
            wcsncat(VAR1+VAR5, VAR6, 100-VAR5-1);
        }
    }
    VAR2.VAR8 = VAR1;
    FUN3(VAR2);
}