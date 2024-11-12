public class Objec{
    String name;
    String color;
    int size;
    String flavour;

    //getters and setter
    public String getName() {
        return name;
    }
    public  void setName(String name) {
        this.name = name; }

    public  String getColor() {
        return color;}

    public void  setColor(String color) {
        this.color = color;}

     public int getSize(){
            return size;
        }
     public void setSize(int  size){
            this.size = size;}
    public  String getFlavour(){
        return flavour;}
    public void setFlavour(String flavour){
        this.flavour = flavour;}

    //constructor
    public Objec(String n, String  c, int s, String f) {
        this.name = n;
        this.color = c;
        this.size = s;
        this.flavour = f;
}
//main method
public static void main(String []args){
    //creation for the object obj
    Objec obj = new Objec("Strawberry","grey",5,"sweet");

    System.out.println("The fruit is called:  " + obj.getName());
    System.out.println("The color of the fruit is: "+ obj.getColor());
    System.out.println("the size is "+obj.getSize());
    System.out.println("The flavour is:  "+obj.getFlavour());
}
}