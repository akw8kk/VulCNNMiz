void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    
    VAR1 = (void *)VAR2;
    {
        void * VAR3 = VAR1;
        void * VAR1 = VAR3;
        {
            
            size_t VAR4 = strlen((char *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, 1);
            memcpy(VAR5, VAR1, (VAR4+1));
            FUN2((char *)VAR5);
            free(VAR5);
        }
    }
}