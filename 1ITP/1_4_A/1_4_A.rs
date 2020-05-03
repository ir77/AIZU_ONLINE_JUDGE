use std::io;

fn main() {
    let numbers = input_number();
    let a = numbers[0];
    let b = numbers[1];
    let c: f64 = (a as f64) / (b as f64);
    
    println!("{} {} {}", a/b, a%b, c);
}

#[allow(dead_code)]
fn input_number() -> Vec<i32> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}
